// Room: /open/badman/room/b3
inherit ROOM;

void create ()
{
  set ("short", "���˹ȴ��");
  set ("long", @LONG
��·�𽥿��������Եķ���Ҳ������������������˹���Ȼ��
�������������������л���Ӧ�о��У�����������翴����ûʲô
���Ψһ����е���ͬ�ĵط���������������ʱ�޿̲����ڵ�ѹ
�ȸаɡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b4",
  "east" : __DIR__"b2",
]));
  set("outdoors", "/open/badman");

  setup();
}
