// Room: /open/main/room/f10.c

inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
������һƬԭʼɭ������Ծ��Ǹߴ����ľ��΢�紵
����������壬����е��ǳ�����������������������ʪ
��Ţ���ڴ����������ߴ���¡¡��ˮ����������մ����͵�
Ь�ӣ����������Ե�������ϴһ����
LONG);

 
 
 
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"road3",
  "south" : __DIR__"room14",
  "west" : __DIR__"road5",
]));

  setup();
}
