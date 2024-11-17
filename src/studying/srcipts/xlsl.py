import pandas as pd
from transformers import pipeline
from time import sleep
# 读取Excel文件并打印每个影片的每条评论
def read_movie_reviews(file_path):
    # 读取Excel文件
    df = pd.read_excel(file_path, header=0)

    # 获取影片名称列和评论列
    movies = df.iloc[0:, 0].values  # 获取影片名称，从第二行第一列开始
    reviews_columns = df.columns[1:]  # 获取评论列，从第二列开始

    # 遍历每个影片的每个评论
    for movie in movies:
        print(f"影片：{movie}")
        for review_column in reviews_columns:
            # 获取当前影片在该评论列的评论内容
            review = df.loc[df[df.columns[0]] == movie, review_column].values[0]
            print(f"评论: {review}")
            # result = sentiment_analysis(review)
            # print(f"情感分析结果: {result}")
            sleep(1)
        print("-" * 40)  # 每部影片结束后打印分隔线
def sentiment_analysis(review):
    # 创建一个情感分析pipeline
    sentiment_analyzer = pipeline("sentiment-analysis", 
                                  model="bert-base-chinese", 
                                  device=0)  # 如果没有GPU，改为device=-1（使用CPU）
    
    # 运行情感分析
    result = sentiment_analyzer(review)
    
    # 输出结果
    return result
# 运行示例
if __name__ == "__main__":
    # 请替换为你实际的Excel文件路径
    file_path = "E:\\desk\\A.xlsx"  # 替换成你的文件路径
    read_movie_reviews(file_path)
