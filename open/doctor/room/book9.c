#include <ansi.h>
inherit ROOM;
inherit __DIR__"bookmsg.c";
string *exit = ({
__DIR__"book1",__DIR__"book2",__DIR__"book3",
__DIR__"book4",__DIR__"book5",__DIR__"book6",
__DIR__"book7",__DIR__"book8",__DIR__"book9",});

void create()
{
    set("short", YEL"�ؾ���"NOR);
    set("long",
(: print_book_msg :),
);
    set("exits", ([
                "south" : exit[random(sizeof(exit))],
                "north" : exit[random(sizeof(exit))],
                "east" : exit[random(sizeof(exit))],
                "west" : exit[random(sizeof(exit))],
        ]));
    set("no_transmit",1);
    setup();
}
void init()
 {
     add_action("do_search","search");
     add_action("do_look","look");
     add_action("do_enter","enter");
 }
int do_search()
{
    object me = this_player();

    if(present("book_mark",me))
{
        write("�㿪ʼ��ϸ����Ѱ�ⷿ���ÿһ�����䣡\n");
    if(random(100) < 50)
{
        write("ͻȻ��ž��������һ�������ƺ�������һ������(road)��\n");
        me->set("doctor/find_door",1);
        return 1;
}else{
        write("�㷢����������ƺ���û��ʲô�ر�֮����\n");
        return 1;
    }
  }
}
int do_look(string arg)
{
    object me = this_player();

    if(!arg || arg != "road") return 0;
    if(me->query("doctor/find_door")==1)
{
        write("�㷢����������ƺ����Խ���(enter)��\n");
        return 1;
  }
}
int do_enter(string arg)
{
    object me = this_player();
    int kar = (int)me->query("kar")+random(20);

    if(!arg || arg != "road") return 0;
    if(me->query("doctor/find_door")==1)
{
        write("�㻺�����߽��������֮��......\n");
    if(random(100) < kar)
        write(HIR"ͻȻ�䣡��һ�Ų��˸��գ��򰵵���ֱ����ȥ....\n"NOR);
        call_out("bad1",3,me);
        return 1;
}else{
        write("������������б�İ�������ȥ...");
        call_out("good1",4,me);
        return 1;
  }
}
int bad1(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"�����������...�����ײײ...ײ����������...\n"NOR);
        me->add("kee",-kee);
        call_out("bad2",3,me);
}
int bad2(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"�����������...�����ײײ...ײ����������...\n"NOR);
        me->add("kee",-kee);
        call_out("bad3",3,me);
}
int bad3(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"�����������...�����ײײ...ײ����������...\n"NOR);
        me->add("kee",-kee);
        call_out("bad4",3,me);
}
int bad4(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"�����������...�����ײײ...ײ����������...\n"NOR);
        me->add("kee",-kee);
        write(HIW"��ò�����ͣ�������������Լ�������ƽ̹�ĵ�����ͷ...\n"NOR);
        me->move("/open/doctor/room/yf-room");
        return 1;
}
int good1(object me)
{
        write("����������������...���ܾ���һƬ���...���ֲ�����ָ...\n");
        call_out("good2",4,me);
}
int good2(object me)
{
        write("����������������...���ܾ���һƬ���...���ֲ�����ָ...\n");
        call_out("good3",4,me);
}
int good3(object me)
{
        write("����������������...���ܾ���һƬ���...���ֲ�����ָ...\n");
        me->move("/open/doctor/room/yf-room");
        write("�����ڵ���һ��ƽ̹�ĵ��棬������ʼ����һƬ���...\n");
        return 1;
}
