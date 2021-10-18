from Questions import Que

question_prompt = [
    "What day is osayamen's birthay?\n a) June 18\n b) July 21\n c) July 23\n",
    "What is osayamen's favorite fruit?\n a) Bannans\n b) Oranges\n c) Pinaples\n",
    "Who is osayamen's main in supersmash bros?\n a) Wolf\n b) Kirby\n c) Jiggily Puff\n",
]

questions = [
    Que(question_prompt[0], "c"),
    Que(question_prompt[1], "a"),
    Que(question_prompt[2], "c"),
]

def run_test(questions):
    score = 0
    for Que in questions:
        anwser = input(Que.prompt)
        if anwser == Que.anwser:
            score += 1
    print(f"You got {score}/{len(questions)} right")

run_test(questions)