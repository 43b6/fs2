#include <ansi.h>
inherit F_FUNCTION;
int do_make_arrow(object me,int lv);
inherit SSERVER;
int perform(object me,object target)
{
int lv;
object ob;
me=this_player();
if(me->query("functions/ten_kee/level") < 50)return notify_fail("�ȼ�����!!\n");
lv = me->query("functions/make_arrow/level");
if(me->query("force") < (lv * 3))return notify_fail("���������,��Ϣһ�����ð�!!\n");
        if(objectp(ob = present("force arrow", me)))
                return notify_fail("��ļ��Ѿ�����!!\n");
        if(me->is_busy()) return notify_fail("������æ�!!\n");
        if(me->is_fighting()) me->start_busy(1);
message_vision(HIW"$N������˫�֣�����һ���������������г�����һ������!!\n"NOR,me
);
me->start_call_out((:call_other,__FILE__,"do_make_arrow",me,lv:),2);
         me->start_busy(1);
me->add("force",-(lv * 3));
if(me->query("force") < 0 ) me->set("force",0);
        return 1;
}
int do_make_arrow(object me,int lv)
{
object obj;
message_vision(HIY"һ˲�䣬"+chinese_number(1+(lv*3))+"��������$N���з�Խ����
\n"NOR,me);
obj=new("/daemon/class/marksman/iceforce/forcearrow.c");
obj->set("name",HIY"������"NOR);
obj->set_amount(1+(lv*3));
obj->move(me);
if(query_function("make_arrow") < 100)
              {
function_improved("make_arrow",random(500));
              }
return 1;
}

