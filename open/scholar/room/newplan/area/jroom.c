// Room: /u/s/sueplan/newplan/area/jroom.c
inherit ROOM;

void create ()
{
  set ("short", "[1;37m�������[1;33m-����[0m");
  set ("long", @LONG
  
����������������ģ�������ǰ��һ������üĿ���Ƶ��ˣ�
������ϸϸһ������ȴ�ֳ���ɱ�����������ĺ���
�㲢�����зǳ���ĺøС��㿴�������ϵĴ���
����һ���ŷ��������Ͼ����������һ�飬����ʱ
�ŷ��֣�ԭ����ǰ������˾��������µ�һ��ʦ֮�Ƶ�
���Һ��ᣬ�������!!
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/juka_jone" : 1,  
]));
  set("light_up", 1);
  set("no_transmit", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 2 */
  "leave" : __DIR__"q1.c",
  "south" : __DIR__"room11.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="leave"&&present("juka jone",environment(me)))
  {
return notify_fail("�㷢�����˵�������, �������!!!\n");
   }
  return 1;
}
