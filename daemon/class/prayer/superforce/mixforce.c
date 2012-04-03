//�»��챦��
//���� by swy
#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP; 
void remove_effect(object me, int skill);
int perform(object me, object target)
{
        string env;
        int skill,fun1;
        skill=me->query_skill("superforce",1);
        env=me->query("env/superforce");
        if(me->query("class")!="prayer"&&me->query("id")!="swy")
        return notify_fail("��ʥ�����á�\n");   
        if(env=="YES"||(env!="white"&&env!="gen"&&env!="ice"&&env!="purple"&&env!="nine"
           &&env!="black"&&env!="bluesea"&&env!="goldsun"&&env!="blood"&&env!="green"))
        return notify_fail("��Ҫ����һ���ķ��ء�\n");   
        if( (string)me->query_skill_mapped("force")!= "superforce" )
        return notify_fail("�����ķ�����Ҫ�û����ķ���������\n");    
        if( skill<20 )
        return notify_fail("������ķ��ȼ���������Ҫ 20��\n");    
        if (me->query("force") < 300)
        return notify_fail("�������������������������ķ���\n");
        if(me->query_temp("mixforce")==1)
        return notify_fail("���Ѿ���ʹ�û����ķ���\n");
        if( skill>=250 ) skill=250;
        me->add("force",-250);
if (skill >= 20 && env=="white") {
        fun1=me->query("functions/white/level");
        if(!fun1) me->set("functions/white/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ���һ���"HIW"������"HIC"������ӿ������������ھ��γ�����������!!\n" NOR,me);
        me->set_temp("superforce",1);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1); 
        } else 
if (skill >=30 && env=="nine") {
        fun1=me->query("functions/nine/level");
        if(!fun1) me->set("functions/nine/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ��ڶ����"CYN"õ��ϼ"HIC"�����Ϸ�������ϼ��Ĺ�ã�γ�����������!!\n" NOR,me);       
        me->set_temp("superforce",2);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >= 40 && env=="gen") {
        fun1=me->query("functions/gen/level");
        if(!fun1) me->set("functions/gen/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ��������"YEL"������"HIC"�����Ϸ������ذ������,�γ�����������!!\n" NOR,me);
        me->set_temp("superforce",3);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >=50 && env=="ice") {
        fun1=me->query("functions/ice/level");
        if(!fun1) me->set("functions/ice/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ����Ĳ��"HIW"��ѩ��"HIC"�����Ϸ����纮˪��ĺ���,���ܵĿ����ƺ�ҲΪ֮����!!\n" NOR,me);
        me->set_temp("superforce",4);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >=60 && env=="purple") {
        fun1=me->query("functions/purple/level");
        if(!fun1) me->set("functions/purple/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ�������"MAG"���Ǻ�"HIC"����ɫ������ʢ!!ȫ��ӿ�����ǺӰ���ھ�!!\n" NOR,me);
        me->set_temp("superforce",5);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >=80 && env=="black") {
        fun1=me->query("functions/black/level");
        if(!fun1) me->set("functions/black/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ������������磬�淺������ȫ����ھ�������������֮��!!\n" NOR,me);
        me->set_temp("superforce",6);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >=110 && env=="bluesea") {
        fun1=me->query("functions/bluesea/level");
        if(!fun1) me->set("functions/bluesea/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ����߲�"HIB"[��׺�]"HIC"���������ܣ�ĺ����Χ����"HIB"��Х����ھ�"HIB"!!\n" NOR,me);
        me->set_temp("superforce",7);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >=150 && env=="goldsun") {
        fun1=me->query("functions/goldsun/level");
        if(!fun1) me->set("functions/goldsun/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ��ڰ˲�"HIY"[����]"HIC"���������ǣ�ɲʱȫ����"HIY"�����ɫ�Ĺ�â"NOR"!!\n" NOR,me);
        me->set_temp("superforce",8);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else 
if (skill >=200 && env=="blood") {
        fun1=me->query("functions/blood/level");
        if(!fun1) me->set("functions/blood/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ��ھŲ�"HIR"[Ѫ��]"HIC"���������˲�ȫ��ɲʱȫ��ð��Ѫ��ɫ������!!\n" NOR,me);
        me->set_temp("superforce",9);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        } else {
if (skill >=250 && env=="green") {
        fun1=me->query("functions/green/level");
        if(!fun1) me->set("functions/green/level",1);
        skill=(int)skill/5;
        message_vision(
        HIC "$N��������ķ���ʮ��"HIG"[������]"HIC"��ɲʱ��ջ谵�����Ƿ�����ȫ������������������ǳ������������!!\n" NOR,me);
        me->set_temp("superforce",10);
        me->set_temp("mixforce",1);
        me->add_temp("apply/force",   skill);
        me->add_temp("apply/move",    skill);
        me->add_temp("apply/dodge",   skill);
        me->add_temp("apply/unarmed", skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill*2);
        if( me->is_fighting() ) me->start_busy(1);
        }
        }
        if(!me->query_temp("mixforce")) {
        message_vision(HIW"$N�����ķ��ȼ���������Ҳû����!\n"NOR,me); }        
        return 1;
}
 
void remove_effect(object me, int skill)
{
        int fun,lv;
        lv=me->query_temp("superforce");
if(lv==1) {
fun=me->query("functions/white/level");
if(fun<50)
function_improved("white",1000);
} else if(lv==2) {
fun=me->query("functions/nine/level");
if(fun<50)
function_improved("nine",1000);
} else if(lv==3) {
fun=me->query("functions/gen/level");
if(fun<50)
function_improved("gen",1000);
} else if(lv==4) {
fun=me->query("functions/ice/level");
if(fun<50)
function_improved("ice",1000);
} else if(lv==5) {
fun=me->query("functions/purple/level");
if(fun<50)
function_improved("purple",1000);
} else if(lv==6) {
fun=me->query("functions/black/level");
if(fun<100)
function_improved("black",900);
} else if(lv==7) {
fun=me->query("functions/bluesea/level");
if(fun<100)
function_improved("bluesea",800);
} else if(lv==8) {
fun=me->query("functions/goldsun/level");
if(fun<150)
function_improved("goldsun",700);
} else if(lv==9) {
fun=me->query("functions/blood/level");
if(fun<150)
function_improved("blood",600);
} else {
fun=me->query("functions/green/level");
if(fun<150)
function_improved("green",500);
}
        me->add_temp("apply/force",    -skill);
        me->add_temp("apply/unarmed",  -skill);
        me->add_temp("apply/move",     -skill);
        me->add_temp("apply/dodge",    -skill);
        me->delete_temp("mixforce");
        me->delete_temp("superforce");
        message_vision(HIW"$N�Ļ����ķ�������ʼ��ɢ�ˡ�\n"NOR,me);
}
