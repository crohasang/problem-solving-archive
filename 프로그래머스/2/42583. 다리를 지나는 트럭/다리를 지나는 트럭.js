function solution(bridge_length, weight, truck_weights) {
    // 다리에는 트럭이 최대 bridge_length대 올라갈 수 있음
    // bridge_length: 다리의 길이, 최대 몇대 올라갈 수 있는지
    // 다리는 weight 이하까지의 무게를 견딜 수 있음
    
    // 예시에는 bridge_length : 2, weight: 10, truck_weights: [7,4,5,6]
    
    // 소요된 시간(초)
    let usedTime = 0;
    
    // 다리 배열
    let bridge = [];
    
    truck_weights = truck_weights.map((element) => {
        return {
            weight: element,
            time: 0,
        }
    })
    
    let firstTruck = truck_weights.shift();
    bridge.push(firstTruck);
    firstTruck.time++;
    usedTime++;
    
    while(bridge.length > 0 || truck_weights.length > 0) {
        
        if (bridge.length > 0 && bridge[0].time >= bridge_length) {
            bridge.shift();
        }
        
        if(truck_weights.length > 0) {
            
            // 가장 앞에서 기다리는 트럭
            let waitingTruck = truck_weights[0]; 
            
            // 트럭 무게의 총합
            let truckWeightSum = 0;

            // 다리를 건너는 트럭들의 무게의 합 구하기
            if(bridge.length !== 0) {
                bridge.forEach((element) => {
                    truckWeightSum += element.weight;
                })
            }

            // 다리를 건너는 트럭들의 무게의 합 + waitingTruck.weight <= weight일 때
            // 그리고 다리에는 트럭이 최대 bridge_length대 올라갈 수 있는 조건에 부합하는지 체크
            if(truckWeightSum + waitingTruck.weight <= weight && bridge.length < bridge_length) {
                bridge.push(truck_weights.shift());
            }
        }
             
        bridge.forEach((element) => {
            element.time++;
        })
        
        usedTime++;
    }
    
    return usedTime;
    
}