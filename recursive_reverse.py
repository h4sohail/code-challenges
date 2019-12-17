def reverse(string):
    if len(string) == 0:
        return string
    return string[-1] + reverse(string[:-1])

print(reverse("abcdef"))