// Room: /open/death/bridge1.c

inherit ROOM;

void create ()
{
  set ("short", "�κ���ͷ");
  set ("long", @LONG
����ǰȥ�����κ����ˣ������κ��žͲ����ٻ�ͷ�ˣ��ѵ���������
û�в����Ĵ�˵�𣡣�ֻ��һ���ŵĹ�Ӱ���κ�������ȥ���ƺ�����ת��
Ͷ̥֮�⣬�Ѿ���·�����ˡ�ÿ����ͬ־����ɫ�ֻֿ��ִ�æ���·���
������������У�����̫��ȥ�ֻ��Ҳ�����λ�ã����ǸϿ���·�ɣ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"start",
  "north" : __DIR__"bridge2",
]));
  set("light_up", 1);
   set("no_auc",1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}
