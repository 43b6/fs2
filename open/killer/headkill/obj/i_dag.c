#include <weapon.h>
#include <ansi.h>
inherit DAGGER;
void create()
{
        seteuid(getuid());
        set_name(HIC"�׻�ذ��"NOR,({"bihu"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
        {
                set("unit", "��");
               set("long","ذ���Ͽ��а׻�֮ͼ�ڣ��·�Ҫ�������Ƶĸо���\n");
                set("value",10000);
                set("material", "steel");
                set("no_sell",1);
                set("no_auc",1);
                set("wield_msg",HIC"$N��$n�������ϣ��е�ȫ���ƺ�����������\n"NOR);
                set("unwield_msg",HIC"$N����һ����������$n�Ż����С���С�\n"NOR);
        }
        init_dagger(63);
        setup();
}

mixed hit_ob(object me)
{
  object user=this_player();
  object *enemy=user->query_enemy();
  int i=random(sizeof(enemy));
  int be = user->query("bellicosity")/10;
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
    if( random(100) > 50 )
    {
       if( random(bb*2)  > enemy[i]->query_skill("dodge",1) )
     {//ע�⣬Ϊ��Ҫǿ��dodge��Ч�ã�������FS���������ӣ�
      //���ԣ�������dodge���������жȣ�������dodge���ڶԷ�һ�������жȼ���100��
      //��Եģ�����Է���dodge�����������Ļ������жȼ�������0��
      message_vision(HIC"�׻�ͼ�ڻ��ɰ׻���Ӱ,��Χ$N���䶯���ٻ�!!"NOR,enemy[i]);
      enemy[i]->start_busy(1);
     }
      else
      	message_vision(HIW"�ɰ׻�ذ�׻����Ļ�Ӱ����$Nʶ�Ƹ�����Ч\n"NOR,enemy[i]);
    }
  }
  return;
}
