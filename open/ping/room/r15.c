// Room: /u/m/moner/open/room/r14.c 
inherit ROOM;
 
void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG

���Ƿ���ɽկ�ڵĴ�㳡,���ʮ�ֹ��,�м���С���������߶�,Ѳ����,����ɽկ�İ�ȫ,
��ǰ��һ������¥�ߵĵﱤʽ����,ռ��ʮ������,���������￴��ʮ����ΰ,װ�εĸ�����,
�㲻����Ľ���ⶰ������������.�㷢�ֽ��������Ϸ���һȦ��ɫ��װ��Ʒ,��ϸһ��,����
һ�ſŻ��ɰ׹ǵ���ͷ,�㲻���������,ԭ������Ǵ�˵�еķ���ɽկѽ!!!



LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r14.c",
  "north" : __DIR__"r13.c",
]));
 set("objects",([
"/open/ping/npc/3.c":2,
]));
  set("outdoors", "wind");

  setup();
  replace_program(ROOM);
}
