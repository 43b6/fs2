// Room: /open/gsword/room/swordhouse
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
���������½���ͬ�������е����紦,��б������,�ΰ׵�ǽ
��,�䲻����,ȴ�Ե�ׯ��.�������ལ�ͽ�������.�����и�
��ʾ��(board),�ƺ���˵����γ�Ϊ��ʿ��һԱ.



LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su10",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "������д�� :
�����Ϊ��ʿ�����һԱ��?
����������������Ľ�����?
�ܼ� ,ֻҪ���(join)���ɼ������ǽ�ʿ����
�Ժ�����ڴ�½�ϸ����ɰ�ʦѧ����.
",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/swordsman/master-1" :1,
]));

  set("light_up", 1);

  setup();
}
