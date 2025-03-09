function solution(jobs) {    
    // jobs = [작업이 요청되는 시점, 작업의 소요시간]
    
    // 1. 작업의 소요시간이 짧은 순으로 나열
    // 2. 작업의 요청 시간이 빠른 순으로 나열
    // 3. 작업 번호가 낮은 순으로 정렬
    
    
    // 새로운 jobsQueue를 만들고 작업 번호를 부여
    const jobsQueue = [];
    for(let i = 0; i < jobs.length; i++) {
        jobsQueue.push({
            jobNum: i,
            requestTime: jobs[i][0],
            durationTime: jobs[i][1],
            
        })
    }
    
    // 작업 요청 시간 순으로 나열
    jobsQueue.sort((a,b) => a.requestTime - b.requestTime);
    
    let currentTime = 0;
    let totalTurnAroundTime = 0;
    let completedJobs = 0;
    
    const waitingQueue = new MaxHeap();
    
    while(completedJobs < jobs.length) {
        
        // 현재 시점까지 요청된 작업을 대기 큐에 추가
        while(jobsQueue.length > 0 && jobsQueue[0].requestTime <= currentTime) {
            waitingQueue.heap_push(jobsQueue.shift());
        }
        
        // 대기 큐가 비어있으면 다음 작업 요청 시점으로 이동
        if(waitingQueue.isEmpty()) {
            if(jobsQueue.length > 0) {
                currentTime = jobsQueue[0].requestTime;
                continue;
            }
            else {
                break;
            }
        }
        
        // 우선순위가 가장 높은 작업 선택
        const job = waitingQueue.heap_pop();
        
        // 작업 완료 시점 계산
        const completionTime = currentTime + job.durationTime;
        
        // 반환 시간 계산
        const turnAroundTime = completionTime - job.requestTime;
        
        totalTurnAroundTime += turnAroundTime;
        currentTime = completionTime;
        completedJobs++;
    }
    
    return Math.floor(totalTurnAroundTime / jobs.length);
}


// 최대 힙
class MaxHeap {
    constructor() {
        this.heap = [null];
    }
    
    isEmpty() {
        return this.heap.length <= 1;
    }
    
    compare(a, b) {
        if(a.durationTime !== b.durationTime) {
            return a.durationTime > b.durationTime;
        }
        
        if(a.requestTime !== b.requestTime) {
            return a.requestTime > b.requestTime;
        }
        
        return a.jobNum > b.jobNum;
    }
    
    heap_push(value) {
        this.heap.push(value);
        let currentIndex = this.heap.length - 1;
        let parentIndex = Math.floor(currentIndex / 2);
        
        while (parentIndex !== 0 && this.compare(this.heap[parentIndex], value)) {
            const temp = this.heap[parentIndex];
            this.heap[parentIndex] = this.heap[currentIndex];
            this.heap[currentIndex] = temp;
            currentIndex = parentIndex;
            parentIndex = Math.floor(currentIndex / 2);
        }
    }
    
    heap_pop() {
        if(this.heap.length === 2) return this.heap.pop();
        
        let returnValue = this.heap[1];
        this.heap[1] = this.heap.pop();
        let currentIndex = 1;
        let leftIndex = 2;
        let rightIndex = 3;
        while(
            (leftIndex < this.heap.length && this.compare(this.heap[currentIndex], this.heap[leftIndex])) ||
            (rightIndex < this.heap.length && this.compare(this.heap[currentIndex], this.heap[rightIndex]))
        ) {
            const temp = this.heap[currentIndex];
            
            if(rightIndex >= this.heap.length || 
               (leftIndex < this.heap.length && this.compare(this.heap[rightIndex], this.heap[leftIndex]))) {
                this.heap[currentIndex] = this.heap[leftIndex];
                this.heap[leftIndex] = temp;
                currentIndex = leftIndex;
            } else {
                this.heap[currentIndex] = this.heap[rightIndex];
                this.heap[rightIndex] = temp;
                currentIndex = rightIndex;
            }
            
            leftIndex = currentIndex * 2;
            rightIndex = leftIndex + 1;
    }
        return returnValue;
}
    heap_return() {
        return this.heap;
    }
}
    