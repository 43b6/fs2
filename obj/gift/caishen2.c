// story:caishen ����

#include <ansi.h>

int give_gift(string money, int amount, string name);

private mixed *story = ({
        "��С������·��ꡣ",
        "�������·��",
        "С����ƾʲô��",
        "����񣺷ϻ���ƾ�ұ�����Ǯ��",
        "С������������ͭ�壬�������˳�ȥ���ߺߵ�������",
        (: give_gift, "coin", 20 + random(100), "ͭ��" :),
        "�����һ����Ц������һЩ�������˳�ȥ��",
        (: give_gift, "silver", 20 + random(30), "����" :),
        "С�������˰��죬�ͳ�һЩ�ƽ�ҧҧ�����˳�ȥ����������ѽ��",
        (: give_gift, "gold", 10 + random(30), "�ƽ�" :),
        "����������Ц���������ͳ�һЩ��Ʊ���˳�ȥ����:��Ǯ�ͼ������ɡ�",
        (: give_gift, "cash", 5 + random(10), "ǧ����Ʊ" :),
        "С����������ɫ������������Ǯ��������Ǯ������·������·��",
});

void create()
{
        seteuid(getuid());
}

mixed query_story_message(int step)
{
        return step < sizeof(story) ? story[step] : 0;
}

int give_gift(string money, int amount, string name)
{
        STORY_D->give_gift("/obj/money/" + money, amount,
                           HIM "\n��ž����һ��һЩ" + name + "��������ǰ��\n\n" NOR);
        return 1;
}