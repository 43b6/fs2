inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "��ֻ��ǳ��");
  set ("long", @LONG
ǰ����孵Ĵ�ֻ�͸�ǳ������, ��λ��Ա����æµ���޲�����, �������Ĵ�
ԱҲ�ڴ˵ش���Ӫ�� (tent). �˵ش�Լλ��С���Ķ��Ϸ�,������ɳ��, ������
��ɫʮ������, ����Ҳ��ɳ̲, ����һ���øɿݵ�����, �����տ����û��ʲô
����.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "tent" : "
������Ա�����,�����ǵ��ַ�����Ӧ�����൱�ḻ. ��Ա������ʼ��
������,��Щ������Щ�޴�,��Щ�����Ϲ�����Ʒ��������,ʮ�ֵ���Ч��.

",
]));
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is7.c",
  "east" : __DIR__"is5.c",
  "west" : __DIR__"is3",
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/son.c" : 1,
  __DIR__"npc/shipm.c" : 1,
]));
  set("outdoors", "/u/u");
  setup();
}
void init()
{
object me=this_player();
add_action("report_ok", "report");
if (me->query_temp("can_back",1))
{
tell_object(me,HIY"\n³ѰͻȻ�Ҵ�ææ�ܹ���˵: ��ֻ�޺���!!\n³Ѱ˵��: ����׼����Ҫ����ʱ�ر�(report)��һ��������.\n"NOR);
return ;
}
return ;
}
int report_ok()
{
object me;
me=this_player();
if (me->query_temp("can_back")==1)
{
tell_object(me,HIY"��˵��: ��׼������, ���Գ�����!!\n"NOR);
call_out("b1",2,me);
me->delete_temp("can_back",1);
return 1;
}
else
{
return 0;
}
}
int b1(object me)
{
tell_object(me,HIC"\n��һ��׼������, �Һʹ�Ա�Ǵ����̴��뿪��������. \n"NOR);
me->move(__DIR__"ship");
call_out("b2",4,me);
return 1;
}
int b2(object me)
{
tell_object(me,HIC"��ֻ�ں��ϻ�������, ����С��������Ҳ������С ...\n"NOR);
call_out("b3",6,me);
return 1;
}
int b3(object me)
{
tell_object(me,HIC"�س��Ϸ�ƽ�˾���û�з���ʲô����, ���˼����������ڻص����ָ�. \n"NOR);
call_out("b4",3,me);
return 1;
}
int b4(object me)
{
tell_object(me,HIY"³Ѱ˵��: ���ǻص����ָ���, ��ȥ���Ҹ��׻ر�(report)��γ��з��������� !\n"NOR);
me->move("/open/port/room/r5-3");
return 1;
}

