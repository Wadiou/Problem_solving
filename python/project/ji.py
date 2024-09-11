class question_:
    def __init__(self,prompt , answer):
        self.prompt= prompt
        self.answer= answer
questions=[question_("how long does it take to complete a livik match \n a) 15-20min \n b)25-30min\n" , "a") ,
           question_("whats the highest level in pubg \n a) 90 \n b)100\n","b")]        
def run():
    score=0
    for question in questions:
        answer = input(question.prompt)
        if answer == question.answer:
            score += 1
        else :
            score += 0
    print("you have got " + str(score) + "/" + str(len(questions)) + " right answers!")

run()