inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ƕ���������ס��������,������Ϊһ�����ָ���,��ȴǱ����
���׾����Լ�������ʮ����,��������Կ����ѻ���ɽ���׾��鼮,���ϻ�
��һ���Ƶ��Ĺ��(broken shell)��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"aa23",
]));
  set("objects", ([ /* sizeof() == 2 */
"/open/tailong/npc/yan.c":1,
"/open/tailong/npc/duanyu.c":1,
]));
 set("item_desc", ([ /* sizeof() == 1 */
"broken shell" : "
����һ��ռ���õĹ��,�����Ѿ��Ƶ���,���ܹ�����....
",
]));

  setup();
  replace_program(ROOM);
}
