// Room: /u/m/moner/room/room/class/r11.c 
inherit ROOM;
 
void create ()
{
set("short","��ʥ��"); 
  set ("long", @LONG

������ħ��������һ�㣬һ̤��������ܵĿ������������������
����������һ˿��������������Ϊ�Լ���˫����ʧȥ�����ˣ���Ŭ����
�����Ĺˣ����ϸ���һ�㱡���Ļҳ�����ʾ��������������

LONG);
set("no_plan",1);
set("exits", ([ /* sizeof() == 2 */
"up" :"/open/snow/room/back",
//"north":"/open/gblade/mrm/room/class/get-meq-room.c",
"down":"/open/gblade/mrm/room/class/r10",
]));
set("no_transmit",1);
set("sa-room",1);
set("objects",([
"/open/gblade/npc/sa.c":1,
]));
  setup();
}
int valid_leave(object me, string dir)
{
if((dir=="up"||dir=="north")&& present("degu sa",environment(me)))     
   return notify_fail(" ����˵�� :�������ɽ��ص� ,�㻹�ǿ��뿪��!!!\n");
return ::valid_leave(me,dir);
}
