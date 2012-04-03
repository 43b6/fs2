#include <weapon.h>
#include <combat.h>
inherit BLADE;
object ob=this_object();
void create()
{
	set_name("ħ������Ӧ��",({"should-not blade","blade"}));
	set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit","��");
      	  set("long","\n����Ӧ��,��������ɫ�������޹⣬������ÿ�������ȴ���в�ͬ��ɫ�еķ������ҵĺڹ⣬�е�����磬�е�����Ѫ���еľ�����ʹ⻪��ĿΪ֮�š�\n");
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
          if( random(exp) > random(20000) && random(5)==0 && me->query("kar")>random(30) )
          {
            message_vision("\n[36m$N���� [0;5m"+ob->query("name")+" [36m�����Ķ�������, ɢ�������µ�ħ��, �ݶ���$N�����ս��ֱָ$n��[0m\n\n",me,enemy[i]);
	    for(count=0;count<5;count++)
	    {
	      message_vision(ob->query("name")+"[1;36m������$N����������񹥻�!![0m\n",me);
	      COMBAT_D->do_attack(me,enemy[i],ob, TYPE_QUICK);
	    }
	  }
	}
}	
int do_blood(string str)
{
        object me=this_player();
        object ob=this_object();
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
	set_name("[1mħ��[1;36m����Ӧ��[0m",({"should-not blade","blade"}));
	set("wield_msg","\n$N���$n��һ�����֣������˵�ս־���Ʊ��������������Ĺ�����ɱ��������\n\n");
	set("unwield_msg","$N������$n�ſ���������й��һ�����������Ľ�$n����\n\n");
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
