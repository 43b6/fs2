// Room: /open/gblade/room/p-room1.c
inherit ROOM;
string do_look();

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������յ����ң������������㣬�������һ��������������Ϣ��
�����Ĺ��ߴ����鸡�ĳ�����ӳ�ڰ�͹���ұ��ϣ���Լ��ɼ����������
��һ��������(box)����ڵ�������ų�����Ӱ�ӣ�ֱ���İ��Ľ����

LONG);
        set("item_desc",([
        "box" : (: do_look :),
        ]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"p-room",
]));
  set("light_up", 1);

  setup();
}
void init()
{
        add_action("do_break","break");
}
string do_look()
{
        if(this_player()->query("lotch")>3)
        return "�㷢�ֺ����ڿտ���Ҳ , ����ʲô������ !\n";
        if(this_player()->query("lotch")<2)
        this_player()->set("lotch",2);
        return "
�������Ϊǧ���������� ,�����ǵ���һ������������ܽ�����(break)
��! �Ѳ���������Ŵ�˵�е������� ? \n";
}
int do_break(string str)
{
        if(!str||str!="box")
        return notify_fail("��Ҫ��ʲô ?\n");
        if(!present("dragon-tiger blade",this_player() ) )
        return notify_fail("�ҵ���������˵�� !\n");
        if(this_player()->query("lotch")>3)
        return notify_fail("��������Ѿ�������� !\n");
        message_vision("$N�ֳ������� , ������һ�� !\n",this_player() );
        message_vision("ǧ������Ϊ���������� , $N�����Ӵ� !\n",this_player()
 );
        this_player()->set("lotch",4);
return 1;
}
