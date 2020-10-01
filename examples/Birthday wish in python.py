# -*- coding: utf-8 -*-
"""
Created on Thu Oct  1 11:38:11 2020

@author: Shobhit
"""

from wordcloud import WordCloud
import matplotlib.pyplot as plt
words="Happy Birthday God Bless Enjoy Fun Party Love Friend Smile Gifts Laugh Dance Foods Wishes Special Surprises Cake Celebrate Music"
wordcloud = WordCloud(width = 800, height = 800,
                background_color ='white',
                min_font_size = 5).generate(words)

plt.figure(figsize = (8, 8), facecolor = None)
plt.imshow(wordcloud)
plt.axis("off")
plt.tight_layout(pad = 0)
plt.show()
