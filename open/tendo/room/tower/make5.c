
inherit ROOM;

string long_desc();

void create()
{
    set("short", "é«");
    set("long", (: long_desc :) );
    set("long.desc", @LONG
�������˴˵أ���Ȼ���֣�é«��Ȼ�ǽ���һ���������ϵĴ���
�ϣ��������������ˣ�һ���󶣶����������������ڴ��˳���������
���ƺ����Կ���һ��ͻ���������ɡ������Ͽɿ������ٰ���(hole)��
LONG
        );
    set("item_desc", ([
    "hole" : @HOLE
��ϸ�ع۲���Щ�������㷢������ԭ��������һ��ͨ����������ӣ�
��������Щ���������㡸���ܡ�������ȥ....

HOLE
    ]) );
    set("exits", ([
    "east" : "/open/tendo/room/tower/make4",
]));
         set("outdoors",1);

        setup();
}

void init()
{
    add_action("do_climb","climb");
}

string long_desc()
{
    string str;
    object ob;
    str = query("long.desc");
    ob = first_inventory(__DIR__"make6");
    if (!ob) return str+"\n";
    else
    return sprintf("[1;37m%s\n������%s��������������[0m\n",
        str,(string)ob->name());
}

int do_climb(string str)
{
    object ob;
    return notify_fail("���ӵĺۼ��Ѿ���ǳ��, ���ֱ��������, ��������ȥ!!\n");
    if (!str) return notify_fail("[1;32m������? ������?!?������ǽ����������!![0m\n");
    if ((str != "wall") && (str != "up"))
        return notify_fail("[1;32m��.... �㲻����������ȥ�ġ�[0m\n");
    ob = first_inventory(__DIR__"make6");
    if (!ob) {
        write("[1;37m�����������һ��������׼��λ��������������...[0m\n");
        tell_room(environment(this_player()),
        (string)this_player()->name()+"���������һ��������ʼ��������\n",
        ({this_object(), this_player()}) );
        this_player()->move(__DIR__"make6");
        return 1;
    }
    else {
        return notify_fail(sprintf("[1;37m��̧ͷ��ȥ��%s���ں�Ŭ����������... ��Ҫ����...[0m\n",
                                    (string)ob->name()));
    }
}



