#include <weapon.h>
#include <combat.h>
inherit BLADE;
object ob=this_object();
void create()
{
	set_name("���������䡯",({"red-sleeve blade","blade"}));
	set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else 
        {
          set("unit","��");
      	  set("long","\n�����䡯��������͸���ģ�����糺죬��͸���Ĳ��������糺�ɫ�ĹǼ������Զ̣����䴦��������˵�����������һ�����飬һ��������\n");
          set("value", 100);
          set("material","blacksteel");
	}
	init_blade(1);
  	setup();
}	
void init()
{
        add_action("do_blood","blood");
        set_heart_beat(1);
}
void heart_beat()
{
        int i,exp;
        object me=environment(this_object());
        object *enemy;
        if( me->is_fighting() && ob->query("equipped")=="wielded" && ob->query("blooded") )
        {
          enemy=me->query_enemy();
          i=random(sizeof(enemy));
          exp=me->query("combat_exp")-enemy[i]->query("combat_exp");
          if(exp<=0)    exp=5000;
          else          exp=5000+exp/10;
          if( random(exp) > random(20000) && random(3)==0 && me->query("kar")>random(30) )
          {
            message_vision("\n[35m$N���� [0;5m"+ob->query("name")+" [35m����һƬ����, ��ͬ��һ��֮��, $n���˿ڱ㼤��һ��ѪȪ��[0m\n\n",me,enemy[i]);
	    enemy[i]->apply_condition("bleeding", 50);
	    enemy[i]->add("kee",-20);
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
	"һ��ҫ�۵�1;5;33m��â[0;31m��[0m\n",me);
	set_name("[1m����[1;35m�����䡯[0m",({"red-sleeve blade","blade"}));                                                       
  	set("wield_msg","\n$N���Ϻ�Ȼ����һ��$n��������ӳһƬˮ�죬���Ӷ�ʱ������һ�����������������������΢΢��������\n\n");
	set("unwield_msg","\n$N���ϵ�$n��һĨϦ�ͣ���һ��ϸ�꣬��Ȼ��������ʧ���١�\n\n");
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
