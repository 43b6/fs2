// Room: /open/capital/room/lake2
inherit ROOM;

void create ()
{
  set ("short", "ܽ�غ���");
  set ("long", @LONG
���������ˡ��м���С����ɢ�õ��ں��ģ��ǳ���⡣�������
ȴ�ǳ�����������������Դ���;�����ĳ���������ȫ����롣�㲻
����л����Ȼ�Ĺ��񹤡������������ɵ���ͤ��

LONG);


  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"lake1",
]));
  set("outdoors", "/open/capital");
  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
