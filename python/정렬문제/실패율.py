def solution(N, stages):
    answer = []
    len_s = len(stages)
    
    for i in range(1, N + 1):
        count = stages.count(i)
        
        if len_s == 0:
            fail = 0
        else:
            fail = count / len_s
        
        answer.append((i, fail))
        len_s -= count
    
    answer.sort(key=lambda x: x[1], reverse=True)
    answer = [i[0] for i in answer]
    return answer