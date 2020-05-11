def solution(s):

    nxt = [0]*len(s)
    for i in range(1, len(nxt)):
        k = nxt[i - 1]
        while True:
            if s[i] == s[k]:
                nxt[i] = k + 1
                break
            elif k == 0:
                nxt[i] = 0
                break
            else:
                k = nxt[k - 1]

    smallPieceLen = len(s) - nxt[-1]
    if len(s) % smallPieceLen != 0:
        return 1

    return len(s)//smallPieceLen