#define GAMBLE_ROOM "/open/center/room/men"

inherit F_CLEAN_UP;

string  *bet_type = ({
        "cash",
        "money",
        "food",
        "water",
        // �����˼Ҷ� exp ��
        // "combat_exp",
        "force",
        "mana",
        "atman",
//"potential",  ...��Ǳ��ȡ��
  "bellicosity", //����ɱ��
});

int main(object me, string arg)
{
        int     value, n;
        string  num, bet, type;
        mapping quests, my_q;

        seteuid(getuid(me));

        if (!arg)
          return notify_fail ("���� help bet ��ѹǮ�ķ�����\n");
        else if (sscanf (arg, "%s %s", num, bet) != 2)
          return notify_fail ("���� help bet ��ѹǮ�ķ�����\n");
        type = "money";
        if (sscanf (bet, "%s %s", bet, type) == 2)
          // ����Ǯһ������ɹ������������ʸ�
          if (type != "money" && type != "cash") {
            quests = "/cmds/std/quests"->query_quests();
            my_q = me->query("quests");
            if (sizeof(my_q)*10 < sizeof(quests) * 7)
              return notify_fail ("��û���ʸ�����ѡ����ע��̬, �����ɼ��������������\n");
          }
        if (member_array(type, bet_type) != -1 &&
            !catch(load_object(GAMBLE_ROOM)))
        {
if(type=="bellicosity" && (me->query("family/family_name")=="ħ����" ||
me->query("family/family_name")=="ħ��Ī��") &&
me->query("bellicosity")>4000)
return notify_fail ("��ɱ������4000�����˲����ٶġ�\n");
if(type=="atman"&&me->query("class")!="dancer" && me->query("atman")>100000)
return notify_fail ("����������100000�����˲����ٶġ�\n");
if(type=="atman"&&me->query("class")=="dancer" && me->query("atman")>150000)
return notify_fail ("����������150000�����˲����ٶġ�\n");
          if (me->query_temp("gamble")) return notify_fail("���Ѿ�ѹ�������ˡ�\n");
          if (sscanf (bet, "%d", value) != 1 || value < 0) return
                notify_fail ("��עһ��Ҫ����, ���� help bet ��ѹǮ�ķ�����\n");
        if(type == "cash" && value < 300)
          return notify_fail ("���ĳ�ֻ�������������ϵ�ǧ����Ʊ�Ķ�ע,С��עһ�ɲ�����!!\n");
        if(type == "cash" && (num=="��" || num=="С"))
          return notify_fail("���ĳ���������Ʊ�Ĵ�С��Ҫ�ľͶĵ���!!!\n");

          return GAMBLE_ROOM->player_bet(me, num, value, type);
        }
        else return notify_fail("���Ƕ�ע��̬����, ���Ƕĳ�������.\n");
}

int help(object me)
{
        me->start_more(@HELP
ָ���ʽ : bet <��/С/����/7> Ǯ��
ָ��˵�� :
           ���ָ���������ѹ�ģ����ڶ�ͽ��˵����һ���ַ�����
         ��Ȥ��������������Ĳ�����򿪶Ĳ�Ƶ����������ֱ��
         ���� gamble�� ����������Ĳ�ѶϢ����ص��Ĳ�Ƶ������
         �������� tune gamble��

�ĵķ�ʽ�� bet <��/С/����/7> <����> [����]
���� С ��ʾ���ӳ� 1��2��3
     �� ��ʾ���ӳ� 4��5��6
     �Ĵ�С�����ƶ�����1000000Ϊ����, ����cash���ܶĴ�С
     ������Ѻ����, һ������, ������һ����, ������cash��, ����һ������Ҫ300 cash
     7  ��ʾ���ӿ���վ��״�����׳ƨΨ��V ���������Ϊ
        �̣��������ӣ�����
���е����಻���Ļ��ǽ�Ǯ�����õ���:
        money             :       Ǯ(Ԥ��ѡ��)
        cash              :       ǧ����Ʊ(������ʮ����)
        food��water       :       ʳ����ˮ(����ʮ����)
        force             :       ����(������ʮ������)
        bellicosity       :       ɱ��(��������ʮ����)
        atman��man        :       ����������(������ʮ����)
        potential         :       Ǳ��(������ʮ����)
������������: ���һ����Ŀ������(���������� 70% (��)����)���ټ���
              �ļ����Ļ������Զ�Ǯ����Ķ���:
  �ļ� <  10    --> Ǯ
  �ļ� <  45    --> ʳ���ˮ
  �ļ� >  50    --> ɱ����������ʳ���ˮ
  �ļ� >  60    --> ʳ���ˮ������������������

PS: ����ĳ�û������ȥ�ĳ��� "start" ����
PS: Ǯ����������������Ҫ����������������߳ɲ��У�
    ���⣬����Ҫһ���Ķļ�
PS: ����� 1000000������ money �������
PS: ��cash�Ļ�û�������µ�����
HELP
    );
    return 1;
}
