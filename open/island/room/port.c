inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
����һ�����ڿ����ĸۿڣ����Ĺ�����������
æµ�ţ�����ԭ����Ԥ��ͨ�����ۣ�����������ʩ��
�У���������ͨ��ƫ�ۡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
   "west" : "/open/main/room/gy1",
  "east" : "/open/island/room/port2",
]));
  set("outdoors", "/open/main");

  setup();
}

