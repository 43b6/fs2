#include <weapon.h>
#include <ansi.h>

inherit DAGGER;
void create()
{
        seteuid(getuid());
        set_name(HIR"��ȸذ��"NOR,({"juchi"}));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
       {
                set("unit", "��");
                set("long","ذ���Ͽ�����ȸ֮ͼ�ڣ��·�Ҫ�ɳ����Ƶĸо���\n");
                set("value",10000);
                set("material", "steel");
                set("no_sell",1);
                set("no_auc",1);
                set("wield_msg",HIR"$N��$n�������ϣ�ȫ���ѱ��������֡�\n"NOR);
                set("unwield_msg",HIR"$N����һ����������$n�Ż����С���С�\n"NOR);
       }
        init_dagger(54);
        setup();
}

mixed hit_ob(object me)
{
  object user=this_player();
  object *enemy=user->query_enemy();
  object victim=enemy[random(sizeof(enemy))];
  int be = (user->query("bellicosity"))/10;
  int inn = user->query_skill("shadow-kill",1);
  int sp = user->query_skill("magic",1);
  int bb = user->query_skill("dodge",1);

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
      message_vision(HBRED"\n��ȸͼ�ڻ�����ȸ,����$N˲������һƬ��!!!\n"NOR,victim);
      victim->add("kee",-250);
      COMBAT_D->report_status(victim);
     }else
      message_vision(HIW"��������ȸذ�׼���,����$N����Ķ㿪\n"NOR,victim);
     }
  }
}
