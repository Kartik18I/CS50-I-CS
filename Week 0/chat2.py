from ollama import chat

user_prompt = input("Prompt:")
system_prompt = "Limit your answer to one sentence. Pretend you're a cat."

response = chat(
    model="llama3.2",
    messages=[
        {
            "role": "system",
            "content": system_prompt
        },
        {
            "role": "user",
            "content": user_prompt
        }
    ]
)

print(response.message.content)