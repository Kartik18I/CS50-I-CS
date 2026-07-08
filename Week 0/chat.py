from ollama import chat

response = chat(
    model="llama3.2",
    messages=[
        {
            "role": "user",
            "content": "In one sentence, what is CS50?"
        }
    ]
)

print(response.message.content)