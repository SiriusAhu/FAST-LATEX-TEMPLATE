from statistics import median


def describe(values: list[float]) -> tuple[float, float]:
    mean = sum(values) / len(values)
    return mean, median(values)


if __name__ == "__main__":
    mean, med = describe([4, 8, 15, 16, 23, 42])
    print(f"mean={mean:.2f}, median={med}")
