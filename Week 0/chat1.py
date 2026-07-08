from ollama import chat

prompt = input("Prompt:")

response = chat(
    model="llama3.2",
    messages=[
        {
            "role": "user",
            "content": prompt
        }
    ]
)

print(response.message.content)