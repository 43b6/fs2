#include <weapon.h>
#include <ansi.h>

inherit DAGGER;
object user;
int be,bb,inn,sp,qq;
void create()
{
        seteuid(getuid());
        set_name(HIG"����ذ��"NOR,({"chilo"}));
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
        {
 	        set("unit", "��");
        	set("long","ذ���Ͽ�������֮ͼ�ڣ��о������������ĺ��ĸо���\n");
                set("value",10000);
                set("material", "steel");
                set("no_sell",1);
                set("no_auc",1);
                set("wield_msg",HIG"$N��$n�������ϣ�ȫ���ѱ��������֡�\n"NOR);
                set("unwield_msg",HIG"$N����һ����������$n�Ż����С���С�\n"NOR);
        }
        init_dagger(60);
        setup();
}

mixed hit_ob(object me)
{
  object user=this_player();
  object *enemy=user->query_enemy();
  object victim=enemy[random(sizeof(enemy))];
  be = (user->query("bellicosity"))/10;
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
    if( random(100) > 40 )
    {
     if( random(bb*2.5)  > victim->query_skill("dodge",1) )
     {//ע�⣬Ϊ��Ҫǿ��dodge��Ч�ã�������FS���������ӣ�
      //���ԣ�������dodge���������жȣ�������dodge���ڶԷ�һ�������жȼ���100��
      //��Եģ�����Է���dodge�����������Ļ������жȼ�������0��
      message_vision(HBGRN"\n����ͼ�ڻ�������,$N������������û�ͷת��!!\n"NOR,victim);
      victim->add("kee",-200);
      victim->add("sen",-100);
      victim->add("gin",-100);
      COMBAT_D->report_status(victim);
     }else
      message_vision(HIW"����������ذ�׼���,����$N����Ķ㿪\n"NOR,victim);
     }
  }
  return;
}
