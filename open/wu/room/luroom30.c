// Room: /open/wu/room/luroom30
// ��ɽ����������
inherit ROOM;
void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�Ÿոս��ݣ�����ŵ�һ�ɵ��ŵ����㡣
�����ǹ�������Ů�������Ĺ뷿������Կ��������һ�׺�ɼ��ɵ�
���Σ��Լ�һ�����д������ױ̨��̨�ϰ��Ÿ�ʽ�����ķ��Σ���ױ
̨����һ���ؾ��ĵ��˴�����������ߡ������ı��죬�㲻���뵽��
����������ߡ�ޱ�����
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/luroom29",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/sheau-yin" : 1,
]));
  set("light_up", 1);
  setup();
}
