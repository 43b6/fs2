#include <weapon.h>
#include <combat.h>
inherit SWORD;
object ob=this_object();
void create()
{
	set_name("�潣��������",({"stay sword","sword"}));
        set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else 
        {
          set("unit","��");
	  set("long","\n�������������ѽ�����ֱ�ģ�ֻ�н��İ�������ģ�������£����˻���Ҫ��γֽ�����ͷ����\n"+
	"		 [36m����������������,�������������㡱��[0m\n");
          set("value", 100);
          set("material","blacksteel");
	}
	init_sword(1);
	setup();
}	
void init()
{
        add_action("do_blood","blood");
        set_heart_beat(1);
}
void heart_beat()
{
        int i,exp,count;
        object me=environment(this_object());
        object *enemy;
        if( me->is_fighting() && ob->query("equipped")=="wielded" && ob->query("blooded") )
        {
          enemy=me->query_enemy();
          i=random(sizeof(enemy));
          exp=me->query("combat_exp")-enemy[i]->query("combat_exp");
          if(exp<=0)    exp=5000;
          else          exp=5000+exp/10;
          if( random(exp) > random(20000) && random(2)==0 && me->query("kar")>random(30) )
          {
	    message_vision("[32m$N���� [0;5m"+ob->query("name")+" [32m�û���һƬ�������, ��$n����ʧ�����ƵĴ���������[0m\n\n",me,enemy[i]);
	    enemy[i]->set("start_busy", 10);
	    enemy[i]->add("kee",-10);
            COMBAT_D->report_status(enemy[i]);
          }
        }
}
int do_blood(string str)
{
        object me=this_player();
        string name=ob->query("name");
        if( str != ob->query("id") )
           return notify_fail("���������ȫ����\n");
        if( ob->query("blooded") )
          return notify_fail("��������ѵõ����������\n");
        if( ob->query("equipped") == "wielded" )
          return notify_fail("���Ƚ�����ж�¡�\n");
        message_vision("[31m$N��������"+name+"������һ��, ��Ѫ��Ȫӿ���ܱ�����"+
        name+"��\n��һ���, ��Ѫ�ѱ�"+name+"���ɴ���, ��"+name+"Ҳ��Ȼ�ķ���"+
        "һ��ҫ�۵�[1;5;33m��â[0;31m��[0m\n",me);
	set_name("[1m�潣[1;33m��������[0m",({"stay sword","sword"}));
	set("wield_msg","\n$NͻȻ�γ�$n��ֻ�����ֿ졢���桢�־������־��ޣ�����������������꣬����һ�ֵĲ���һ����\n\n");
	set("unwield_msg","$N��$n����ֻ���ú�Ȼ֮��������ʧ��\n\n");
	set("weapon_prop/damage",99);
        set("value", 100000);
        set("blooded",1);
        setup();
	call_out("wake_up",4);
	me->unconcious();
        return 1;
}
void wake_up()
{
        object who=this_player();
        who->remove_call_out("revive");
        who->revive();
}
