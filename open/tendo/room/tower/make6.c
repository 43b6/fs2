
inherit ROOM;

int do_climb(string str);
string show_ring();

void create()
{
    set("short", "������");
    set("long", @LONG
������������֮�У����¿�ȥ�������������һ�ξ����ˣ�����
��ȥ���ǿ�ͻ�������Ҳ���Ǻ�Զ�ˣ�������߶���һ������(ring)��

LONG
        );
    set("item_desc", ([
    "ring" : (: show_ring :)
    ]) );
     set("outdoors",1);

        setup();
}

void init()
{
    reset();
    add_action("re_route_cmd","",1);
    add_action("do_climb", "climb");
}

int re_route_cmd(string str)
{
    string cmd;
    int i;
    string *invalid_cmds;
    cmd = query_verb();
    invalid_cmds = ({"enforce", "meditate", "practice", "study", "wield", 
"exercise", "learn", "scribe", "conjure", "enchant", "exert", "perform", 
"respirate","drop"});
    i = member_array(cmd, invalid_cmds);
    if (i == -1) return 0;
    else write("[1;37m����Ŀǰ�Ĵ���������Ҫ������º��ѡ�[0m\n");
    return 1;
}

int do_climb(string str)
{
    int chance;
    if (this_player()->query_temp("looked_ring")) chance = 10;
    else chance = random(10);
    if (!str) return notify_fail("[1;32m������? ������?!?��Ҫ���ϻ�����??[0m\n");
    if ((str != "up") && (str != "down"))
        return notify_fail("[1;32m��.... ����û����������������.[0m\n");
    write("[1;37m�����������һ��������׼��λ�������Ŀ�ʼ��...[0m\n");
    if ((str == "up" ) && (chance >= 8)) {
        this_player()->move(__DIR__"make7");
        tell_room(environment(this_player()),
        (string)this_player()->name()+"�����������������.\n",
        this_player());
    return 1;
    }
    else {
        if ((str == "down" ) && (chance >= 8)) {
        this_player()->move(__DIR__"make5");
        tell_room(environment(this_player()),
        (string)this_player()->name()+"��С�ĵش�����������.\n",
        this_player());
        return 1;
        }
        else {
            write("[1;37mһ��С��ûץ��.... ������ȥ... ˤ����ͷ���ۻ�.[0m\n");
            this_player()->receive_damage("kee", 50);
            this_player()->move(__DIR__"make5");
            tell_room(environment(this_player()),
            "������һ���ҽ�, "+(string)this_player()->name()+"������ˤ��"+
            "����.\n",
            this_player());
        }
    }
    return 1;
}

string show_ring()
{
    this_player()->set_temp("looked_ring",1);
    return "һ�������������Լ�����ư�����滹��һ�ضϵ������ӣ���֪���Ǹ���\n"+
    "ù����������. ������������... ��������ð���հ�. С�ĵ������.\n";
}



