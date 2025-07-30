# para=input("Text: ").strip()
# let=0
# word=1
# sent=0
# punc=[".","!","?"]
# for x in para:
#     if x.isalpha(): let+=len(x)
#     if x==" ": word+=1
#     if x in punc: sent+=1
# # print(let)
# # print(word)
# # print(sent)
# cli=round(0.0588 * (let*100/word) - 0.296 * (sent*100/word) - 15.8)
# # print(round(cli))
# if cli<16: print("Grade ",cli)
# else: print("Grade 16+")

para=input("Text: ").strip()
let=0
word=1
sent=0
punc=[".","!","?"]
for x in para:
    if x.isalpha(): let+=len(x)
    if x==" ": word+=1
    if x in punc: sent+=1
cli=round(0.0588 * (let*100/word) - 0.296 * (sent*100/word) - 15.8)
if cli<1:print("Before Grade 1")
print("Grade ",cli) if cli<16 else print("Grade 16+")