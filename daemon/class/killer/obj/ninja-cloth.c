#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object user=this_player();
void faint(object user);
void create(object user)
{
        user = this_player();
        set_name(MAG"�������߷�" NOR ,({"ninja-cloth","cloth"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",10000);
                set("material","gem");
                set("no_sell",1);
                set("no_auc",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
                set("no_steal",1);
                set("armor_prop/armor", 10);
        }
        setup();
}
int query_autoload()
{
 return 1;
}

int init()
{
add_action("do_wear","wear");
add_action("do_remove","remove");
}
int do_wear(string str,object user)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
   message_vision(MAG"$N�����������߷�, ���Լ���ò����������\n"NOR,user);
   if (user->query("change") != 1)
   {
   user->set("old_id",user->query("id"));
   user->set("old_name",user->query("name"));
   user->set("old_nickname",user->query("nickname"));
   user->set("old_title",user->query("title"));
   user->set("id","japan ninja");
   user->set("name","����");
   user->delete("nickname");
   user->set("title",GRN"����������"NOR);
   user->set("change",1);
   }
   set_heart_beat(1);
 }
}
int do_remove(string str)
{
   if(str=="ninja-cloth" || str=="all" || str=="cloth")
     if( query("equipped") )
     {
   message_vision(MAG"$N�����������߷�, ¶��ԭ����ò��\n"NOR,user);
   user->set("id",user->query("old_id"));
   user->set("name",user->query("old_name"));
   user->set("nickname",user->query("old_nickname"));
   user->set("title",user->query("old_title"));
   user->delete("change");
   set_heart_beat(0);
     }
}
void heart_beat()
{
 if( user->is_fighting() && query("equipped"))
{
object room;
room=environment(user);
 if( random(100) > 95 && user->query_temp("evil-body")==1 )
   {
message_vision(MAG"\n$N˫�۷���, ȫ��ɢ�������������Ϣ��\n"NOR,user);
message_vision(MAG"\n�� ��  "HIW"��  ħ  ��  ��  ��  ��  "MAG"�� ��\n"NOR,user);
message_vision(HIW"\n$N������˲�䱬������, ����ͽ������!!\n"NOR,user);
user->add("max_kee",50000);
user->add("max_gin",50000);
user->add("max_sen",50000);
user->add("force",20000);
user->set("eff_kee",user->query("max_kee"));
user->set("eff_gin",user->query("max_gin"));
user->set("eff_sen",user->query("max_sen"));
user->set("kee",user->query("max_kee"));
user->set("gin",user->query("max_gin"));
user->set("sen",user->query("max_sen"));
user->add_temp("apply/attack",2000);
user->add_temp("apply/defense",2000);
user->add_temp("apply/force",500);
user->add_temp("apply/dagger",500);
user->add_temp("apply/throwing",500);
user->set("force_factor",50);
user->delete_temp("evil-body");
user->set_temp("body_change",1);
}}}