// Room: /open/badman/room/b1.c

inherit ROOM;

void create ()
{
  set ("short", "���˹�");
  set ("long", @LONG
ͻȻ�䣬�����ǰ��Ȼ���ʣ�������ɽ�У��漣��ĳ�����һ
Ƭ�ƻ�����������ǣ�ѣ�˶�Ŀ������������Ŀ��������Ķ���
�ȣ���Ȼ��˵��������ɭ���ڰ������˿̶��˹��о���һƬ�Ի͵�
�ƻ𡣵���ƻ�ǵ�δʹ���˹ȵ����ؼ��٣�����ʹ���˹ȸ�����
��˵�����Ĺ��졣
    �ƹ��£�ֻ��һ��ʯ��(stele)���ڵ��ԡ�

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stele" : "
	�����ȣ�
	����Ϊū��
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b2",
  "east" : __DIR__"b0",
]));

  setup();
}
