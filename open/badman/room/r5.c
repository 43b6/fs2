// Room: /open/badman/room/r5
inherit ROOM;

void create ()
{
  set ("short", "�ĳ�");
  set ("long", @LONG
����ۼ���һ���û��ɵ�ǿ�����ǣ����ŷ��䳳�ĸ�����
��һ�������˸е����ܡ�������յ���Ⱥ�п�����ϸ���ŷ���ԭ��
�����Ƕ��˹�����Ψһ�Ķĳ����ѹֻ�����ô�಻����ҵ��ǿ����
��������㷢����������Χ��һ�������������ӵ��˲�֪�ڿ�ʲ
ô���֡�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"b9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/kwan" : 1,
]));
  set("light_up", 1);

  setup();
}
