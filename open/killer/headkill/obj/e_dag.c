#include <weapon.h>
#include <ansi.h>
inherit DAGGER;
int be,bb,inn,sp,qq;
void create()
{
        seteuid(getuid());
        set_name(HIY"����ذ��"NOR,({"sawu"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
 	{
 		set("unit", "��");
	         	set("long","ذ���Ͽ�������֮ͼ�ڣ������������ȵĸо���\n");
                		set("value",10000);
	                  set("material", "steel");
                		set("no_sell",1);
		set("no_auc",1);
	       set("wield_msg",HIY"$N��$n�������ϣ��е�һ�����ȵĸо���\n"NOR);
	       set("unwield_msg",HIY"$N����һ����������$n�Ż����С���С�\n"NOR);
	}
        init_dagger(60);
        setup();
}

mixed hit_ob(object me)
{
  object user=this_player();
  object *enemy=user->query_enemy();
  object victim=enemy[random(sizeof(enemy))];
  be = user->query("bellicosity");
  inn = user->query_skill("shadow-kill",1);
  sp = user->query_skill("magic",1);
  bb = user->query_skill("dodge",1);

 if (this_player()->query("class") != "killer")
	return 0;
 if( user->is_fighting() && query("equipped") )
  {//��һ���Ǽ���ж��ٻ��������ع���Լ50��
   //��Ϊʹ���Լ������������Լ���ɱ����1000��
   //�������� 0-1000��֮�䣬����һ�������� 1000
   //���԰�����������ֵ*2������������������ֵ����500���Ϳ��Դ���1000
    if( random(100) > 40)
    {
     if( random(bb*2.5)  > victim->query_skill("dodge",1) )
     {//ע�⣬Ϊ��Ҫǿ��dodge��Ч�ã�������FS���������ӣ�
      //���ԣ�������dodge���������жȣ�������dodge���ڶԷ�һ�������жȼ���100��
      //��Եģ�����Է���dodge�����������Ļ������жȼ�������0��
      message_vision(HIY"\nذ������һ����ѹ�ĸо�����$N�е������ѹ��\n"NOR,victim);
      victim->add("sen",-200);
      victim->add("gin",-200);
      COMBAT_D->report_status(victim);
     }
     else
     	 message_vision(HIW"����ذ�������ѹ����$N����Ķ㿪\n"NOR,victim);
     }
  }
  return;
}
