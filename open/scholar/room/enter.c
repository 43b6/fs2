// Room: /u/j/judd/room/enter_room.c
inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
ǰ����һ���������൱�ر�Ľ�������ؾ��������ˣ�Ȼ��
ȴ�������κε���ڣ�ֻ��һ֦����ʯ��������ǰ������д�š�
�߿׷�˱�(pen)�������ϻ��и�ʽ��ֵ�ͼ������֪����ʲô��
�塣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"newplan/area/groom1.c",
  "north" : "/open/start/room/r3.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "pen" : "����ϸ�������ƣ�������֧���б�ת��(turn)���ĺۼ���
",
]));
  set("outdoors", "/open/start");

  setup();
}
void init()
{
  add_action("do_turn", "turn");
}
int do_turn(string str)
{
  object who;
  who = this_player();

       tell_object(who,"\n��С�������ת���߲ʷ�˱ʡ�\n\n");

tell_object(who,"�ݵ�һ�����������˲�֪�����ı�һ������������ȥ�ˡ�\n\n");
        who->move(__DIR__"r24");

tell_room(this_object(),"��ֻ����"+who->query("name")+"����һ�����Ѿ�������������Ӱ�ˡ�\n");
        return 1;
}

