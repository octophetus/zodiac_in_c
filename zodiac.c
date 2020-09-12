#include <cs50.h>
#include <stdio.h>

int getsign(int m, int d);
void westernreading(int i);
int getchinesesign(int y);
void chinesereading(int a);

int main(void)
{
    int month, day, year, tradition;
    do
    {
    month = get_int("Enter your birth month (Write as 1-12): ");
    }
    while (month < 1 || month > 12);
    do
    {
    day = get_int("Enter your day of birth (Write as 1-31): ");
    }
    while (day < 1 || day > 31);
    do
    {
    year = get_int("Enter your year of birth (Write as 4 digits e.g. 1992): ");
    }
    while (year < 1924 || year > 2032);
    do
    {
    tradition = get_int("Do you want your Western Zodiac or Chinese Zodiac Reading? (Enter 1 for Western, 2 for Chinese): ");
    }
    while (tradition < 1 || tradition > 2);
    if (tradition == 1)
    {
        int sign = getsign (month, day);
        westernreading (sign);
    }
    else
    {
        int chinesesign = getchinesesign(year);
        chinesereading (chinesesign);
    }
}

int getchinesesign (int y)
{
    if (y == 1924 || y == 1936 || y == 1948 || y == 1960 || y == 1972 || y == 1984 || y == 1996 || y == 2008 || y == 2020 || y == 2032)
    {
        return 1;
    }
    else if (y == 1925 || y == 1937 || y == 1949 || y == 1961 || y == 1973 || y == 1985 || y == 1997 || y == 2009 || y == 2021 || y == 2033)
    {
        return 2;
    }
    else if (y == 1926 || y == 1938 || y == 1950 || y == 1962 || y == 1974 || y == 1986 || y == 1998 || y == 2010 || y == 2022 || y == 2034)
    {
        return 3;
    }
    else if (y == 1927 || y == 1939 || y == 1951 || y == 1963 || y == 1975 || y == 1987 || y == 1998 || y == 2011 || y == 2023 || y == 2035)
    {
        return 4;
    }
    else if (y == 1928 || y == 1940 || y == 1952 || y == 1964 || y == 1976 || y == 1988 || y == 1999 || y == 2012 || y == 2024 || y == 2036)
    {
        return 5;
    }
    else if (y == 1929 || y == 1941 || y == 1953 || y == 1965 || y == 1977 || y == 1989 || y == 2000 || y == 2013 || y == 2025 || y == 2037)
    {
        return 6;
    }
    else if (y == 1930 || y == 1942 || y == 1954 || y == 1966 || y == 1978 || y == 1990 || y == 2001 || y == 2014 || y == 2026 || y == 2038)
    {
        return 7;
    }
    else if (y == 1931 || y == 1943 || y == 1955 || y == 1967 || y == 1979 || y == 1991 || y == 2002 || y == 2015 || y == 2027 || y == 2039)
    {
        return 8;
    }
    else if (y == 1932 || y == 1944 || y == 1956 || y == 1968 || y == 1980 || y == 1992 || y == 2003 || y == 2016 || y == 2028 || y == 2040)
    {
        return 9;
    }
    else if (y == 1933 || y == 1945 || y == 1957 || y == 1969 || y == 1981 || y == 1993 || y == 2004 || y == 2017 || y == 2029 || y == 2041)
    {
        return 10;
    }
    else if (y == 1934 || y == 1946 || y == 1958 || y == 1970 || y == 1982 || y == 1994 || y == 2005 || y == 2018 || y == 2030 || y == 2042)
    {
        return 11;
    }
    else 
    {
        return 12;
    }
}

void chinesereading(int a)
{
    if (a == 1)
    {
        printf("Your animal is the rat  🐀.\n");
        printf("Quick-witted, resourceful, versatile, kind\n");
    }
    else if (a == 2)
    {
        printf("Your animal is the ox  🐂.\n");
        printf("Diligent, dependable, strong, determined\n");
    }
    else if (a == 3)
    {
        printf("Your animal is the tiger  🐯.\n");
        printf("Brave, confident, competitive\n");
    }
    else if (a == 4)
    {
        printf("Your animal is the rabbit  🐇.\n");
        printf("Quiet, elegant, kind, responsible\n");
    }
    else if (a == 5)
    {
        printf("Your animal is the dragon  🐉.\n");
        printf("Confident, intelligent, enthusiastic\n");
    }
    else if (a == 6)
    {
        printf("Your animal is the snake  🐍.\n");
        printf("Enigmatic, intelligent, wise\n");
    }
    else if (a == 7)
    {
        printf("Your animal is the horse  🐴.\n");
        printf("Animated, active, energetic\n");
    }
    else if (a == 8)
    {
        printf("Your animal is the goat  🐐.\n");
        printf("Calm, gentle, sympathetic\n");
    }
    else if (a == 9)
    {
        printf("Your animal is the monkey  🐒.\n");
        printf("Sharp, smart, curiosity\n");
    }
    else if (a == 10)
    {
        printf("Your animal is the rooster  🐓.\n");
        printf("Observant, hardworking, courageous\n");
    }
    else if (a == 11)
    {
        printf("Your animal is the dog  🐶.\n");
        printf("Lovely, honest, prudent\n");
    }
    else
    {
        printf("Your animal is the pig  🐖.\n");
        printf("Compassionate, generous, diligent\n");
    }
}
int getsign(int m, int d)
{
    if ((m == 3 && d >= 21) || (m == 4 && d <= 19))
    {
        return 1;
    }
    else if ((m == 4 && d >= 20) || (m == 5 && d <= 20))
    {
        return 2;
    }
    else if ((m == 5 && d >= 21) || (m == 6 && d <= 20))
    {
        return 3;
    }
    else if ((m == 6 && d >= 21) || (m == 7 && d <= 22))
    {
        return 4;
    }
    else if ((m == 7 && d >= 22) || (m == 8 && d <= 22))
    {
        return 5;
    }
    else if ((m == 8 && d >= 23) || (m == 9 && d <= 22))
    {
        return 6;
    }
    else if ((m == 9 && d >= 23) || (m == 10 && d <= 22))
    {
        return 7;
    }
    else if ((m == 10 && d >= 23) || (m == 11 && d <= 21))
    {
        return 8;
    }
    else if ((m == 11 && d >= 22) || (m == 12 && d <= 21))
    {
        return 9;
    }
    else if ((m == 12 && d >= 22) || (m == 1 && d <= 19))
    {
        return 10;
    }
    else if ((m == 1 && d >= 20) || (m == 2 && d <= 18))
    {
        return 11;
    }
    else
    {
        return 12;
    }    
}

void westernreading (int i)
{
    if (i == 1)
    {
        printf("You are an Aries ♈  🐏 \n");
        printf("Aries people are creative, adaptive, and insightful. They can also be strong-willed and spontaneous (sometimes to a fault). Aries people can be driven and are very ambitious often making them over-achievers in anything they set their mind to tackle. Aries are fire signs, and so too is their personality. They may be quick to anger, but don’t take it personally, it’s just their fiery, passionate personalities showing through. Aries signs have excellent sense of humor and they get along with almost everyone at the party (and they DO know how to party). Aries can be impatient, but we love them anyway because they are devoted friends, lovers and family members – they are loyal to then end and will fight for their causes (usually supporting the underdog).\n");
    }
    else if (i == 2)
    {
        printf("You are a Taurus ♉  🐂 \n");
        printf("Taurus zodiac signs and meanings, like the animal that represents them, is all about strength, stamina and will. Stubborn by nature, the Taurus will stand his/her ground to the bitter end (sometimes even irrationally so). But that’s okay because the Taurus is also a loving, sympathetic and appreciative sign. The Taurus is very understanding and when we need someone to unburden ourselves to, we often share our deepest fears with the Taurians of the zodiac. Taurians are very patient, practical and efficient, they are excellent in matters of business and are also wonderful instructors/teachers. Although initially they may have their own best interest at heart, they are ultimately and endlessly generous with their time, possessions and love.\n");
    }
    else if (i == 3)
    {
        printf("You are a Gemini ♊  👬 \n");
        printf("Flexibility, balance and adaptability are the keywords for the Gemini. They are quick to grasp the meaning of a situation and act on it, often with positive effects. They tend to have a duality to their nature, and can sometimes be tough to predict how they will react. They can turn from hot to cold and may be prone to noticeable mood swings. However, they are generous signs with tendencies of being affectionate, and imaginative. They also inspire others easily as they seem to naturally motivate themselves – their charisma and accomplishments are infectious. Geminians are very supportive, and are especially good at promotions, sales, and driving hard bargains.\n");
    }
    else if (i == 4)
    {
        printf("You are a Cancer ♋  🦀 \n");
        printf("Cancerians love home-life, family and domestic settings. They are traditionalists, and enjoy operating on a fundamental level. They love history, and are fascinated with the beginnings of things (heraldry, ancestry, etc.). The moon is their ruler, so they can be a bit of a contradiction and sometimes moody. However, they are conservative, so they’ll be apt to hide their moods from others altogether. They have a reputation for being fickle, but they’ll tell you that isn’t true, and it’s not. Cancerians make loyal, sympathetic friends. However Cancerians need alone time, and when they retreat, let them do so on their terms.\n");
    }
    else if (i == 5)
    {
        printf("You are a Leo ♌  🦁 \n");
        printf("The zodiac signs and meanings of Leo is about expanse, power and exuberance. Leo’s are natural born leaders, and they will let you know it as they have a tendency to be high-minded and vocal about their opinions. That’s okay because if you observe, the Leo is usually correct in his/her statements. Leo’s have a savvy way of analyzing a situation and executing swift judgment with a beneficial outcome. It comes from being a leader. They are brave, intuitive, and also head-strong and willful. Beneath their dynamic persona lies a generous, loving, sensitive nature that they do not easily share with others. They might be a bit bossy, but those who know them understand this comes from a source need to do good not (usually) from an inflated ego.\n");
    }
    else if (i == 6)
    {
        printf("You are a Virgo ♍  👧 \n");
        printf("Virgo’s have keen minds, and are delightful to chat with, often convincing others of outlandish tales with ease and charm. Virgo’s are inquisitive and are very skilled at drawing information from people. This trait also makes them naturally intuitive. Combine this with their remarkable memories, and we see an advanced, analytical personality. However the Virgo needs balance in their lives otherwise they may become short-tempered, impatient and self-serving. Virgo’s are excellent teammates in work and social activities. They work well with others, although they freely express their opinions (even when unwarranted).\n");
    }
    else if (i == 7)
    {
        printf("You are a Libra ♎  ⚖ \n");
        printf("As their zodiac signs and meanings would indicate, Libra’s are all about balance, justice, equanimity and stability. They easily surround themselves with harmony and beauty, but sometimes go to extremes to do so if their goals are unreasonable or unhealthy. With Venus as their ruling planet, Libra’s are very understanding, caring, and often the champion of underdogs. They have keen intuitions, but often don’t give themselves enough credit for their perceptions. They can be quiet and shy if not persuaded to come out of their shell. Ironically and in spite of their introverted nature they make excellent debaters, often proving a point from out of seemingly nowhere.\n");
    }
    else if (i == 8)
    {
        printf("You are a Scorpio ♏  🦂 \n");
        printf("The Scorpio is often misunderstood. These personalities are bold and are capable of executing massive enterprises with cool control and confidence. They can surmount seemingly all obstacles when they put their mind to the task and they have unshakable focus when the situation calls for it. Regardless of their bold nature, they are often secretive, but they are always observing behind their withdrawn manner.\n");
    }
    else if (i == 9)
    {
        printf("You are a Sagittarius ♐  🏹 \n");
        printf("Here we have the philosopher among the zodiac signs and meanings. Like the Scorpio, they have great ability for focus, and can be very intense. However, they must channel their energy or they will waste time and wear themselves out going in too many directions at once. They are not very patient and expect quick results. However, when encountered with failure they make extreme comeback’s often against incredible odds. They make loyal friends and lovers, but they do not handle commitment well as they refuse to be tied down while chasing philosophical pursuits.\n");
    }
    else if (i == 10)
    {
        printf("You are a Capricorn ♑  🐐 \n");
        printf("Capricorn’s are also philosophical signs and are highly intelligent too. They apply their knowledge to practical matters, and strive to maintain stability and order. They are good organizers, and they achieve their goals by purposeful, systematic means. They are very intuitive, although they don’t share this trait with others freely. They do not deal well with opposition or criticism but a healthy Capricorn will often shrug off negative comments towards their character. They are patient and persevering – they know they can accomplish any task as long as they follow a their plan step-by-step. Capricorn’s have broad shoulders, and typically take on other’s problems with aplomb. Ironically, they rarely share their own problems and tend to go through bouts of inner gloom after a spell of dwelling on these problems.\n");
    }
    else if (i == 11)
    {
        printf("You are an Aquarius ♒  🏺 \n");
        printf("Often simple and unassuming, the Aquarian goes about accomplishing goals in quiet, often unorthodox ways. Although their methods may be unorthodox, the results for achievement are surprisingly effective. Aquarian’s will take up any cause, and are humanitarians of the zodiac. They are honest, loyal and highly intelligent. They are also easy going and make natural friendships. If not kept in check, the Aquarian can be prone to sloth and laziness. However, they know this about themselves, and try their best to motivate themselves to action. They are also prone to philosophical thoughts, and are often quite artistic and poetic.\n");
    }
    else
    {
        printf("You are a Pisces ♓  🐟 \n");
        printf("Unassuming in presentation, the Pisces zodiac signs and meanings deal with acquiring vast amounts of knowledge, but you would never know it. They keep an extremely low profile compared to others in the zodiac. They are honest, unselfish, trustworthy and often have quiet dispositions. They can be overcautious and sometimes gullible. These qualities can cause the Pisces to be taken advantage of, which is unfortunate as this sign is beautifully gentle, and generous. In the end, however, the Pisces is often the victor of ill circumstance because of his/her intense determination. They become passionately devoted to a cause – particularly if they are championing for friends or family.\n");
    }
}