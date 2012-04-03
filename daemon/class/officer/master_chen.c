// class_level: ��һЩ����(��).... :>      ccat
// �����������������,��ҿ��ܻ�����ظ��ƺ�,��ֻ�Ǻ���,Ӧû��... :>
#include <ansi.h>
#include "/open/open.h"
#define max "max"
#define min "min"
inherit NPC;
inherit F_MASTER;
mapping class_level = ([
        "����Ժ����"      : ([ max : 25 , min : 0 ]),
        "ƽ����ʦү"      : ([ max : 50 , min : 25 ]),
        "ƽ������"        : ([ max : 100 , min : 50 ]),
        "��ͬ����"        : ([ max : 150 , min : 100 ]),
        "��������"        : ([ max : 200 , min : 150 ]),
        "��������"        : ([ max : 300 , min : 200 ]),
        "ͩ������"        : ([ max : 400 , min : 300 ]),
        "������"          : ([ max : 500 , min : 400 ]),
        "����֪��"        : ([ max : 600 , min : 500 ]),
        "����֪��"        : ([ max : 700 , min : 600 ]),
        "����֪��"        : ([ max : 800 , min : 700 ]),
        "�Ͼ�֪��"        : ([ max : 900 , min : 800 ]),
        "�����ᶽ"        : ([ max : 1000 , min : 900 ]),
        "�ƹ��ܶ�"        : ([ max : 2000 , min : 1000 ]),
        "�����ܶ�"        : ([ max : 3000 , min : 2000 ]),
        "�����ܶ�"        : ([ max : 4000 , min : 3000 ]),
        "������Ա����"  : ([ max : 5000 , min : 4000 ]),
        "������"        : ([ max : 6000 , min : 5000 ]), 
        "��������"        : ([ max : 7000 , min : 6000 ]),
        "�մ���ͼ���ѧʿ": ([ max : 8000 , min : 7000 ]), 
        "��ة��"          : ([ max : 9000 , min : 8000 ]),
        "��ة��"          : ([ max : 10000 , min : 9000 ]),
        "�մ�һ��ǧ�ﲮ"  : ([ max : 15000 , min : 10000 ]),
        "�մͶ����򻧺�"  : ([ max : 20000 , min : 15000 ]),
        "�մ�һ�ȶ�����"  : ([ max : 25000 , min : 20000 ]),
        "�մͶ��Ȼ�����"  : ([ max : 30000 , min : 25000 ]),
        "�մ�һ��¹����"  : ([ max : 40000 , min : 30000 ]),
        "�մ��ص�ƽ����"  : ([ max : 50000 , min : 40000 ]),
        ]);
void create()
{
        set_name("��֪��",({"master chen","chen"}));
        set("long",
        "���Ǳ����̲��������߹�,���ƴ�����,����ȫ��˾�����Ա���ȡ�\n"+ 
        "�йص��ٵ�һЩָ���Լ��ƶȵȵȵ�˵����(help officer).\n");
        set("gender","����");
        set("class","officer");
        set("title","����������");
        set("officer_class","����������");
        set("officer_power",150);
        set("max_officer_power",150);
        set("guild_master",1);
        set("office_exp",10000);
        set("nickname","ִ����ɽ");
        set("officer_att","good");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",55);
        set("str", 30);
        set("con", 30);
        set("cps", 30);
        set("max_force",2500);
        set("force",2500);
        set("max_kee",3500);
        set("kee",3500);
        set_temp("apply/armor",150);
        set_skill("literate",80);
        set_skill("force",30);
        set_skill("dodge",40);
        set_skill("parry",60);
        set_skill("unarmed",40);
        set_skill("dagger",90);
        set_skill("be-officer",120);
        set_skill("security",120);
        map_skill("be-officer","security");
        set_skill("dragon-dagger",90);
        map_skill("dagger","dragon-dagger");
        set_skill("chen-steps",60);
        map_skill("dodge","chen-steps");
        set_skill("oneforce",40);
        set_skill("chen-steps",60);
        map_skill("force","oneforce");
        map_skill("dodge","chen-steps");
        set("force_factor",10);
        setup();
        create_family("��֪��",1," ");
        carry_object("/open/capital/obj/chen_dagger")->wield();
}

  void attempt_apprentice(object ob)
{
        command("l "+ob->query("id"));
        command("recruit "+ob->query("id"));
        ob->set("officer_class","����������");
        ob->set("officer_power",10);
        ob->set("max_officer_power",10);
        ob->set("title","����������");
        ob->set("relation/master chen/value",30);
        ob->set("relation/master chen/name","��֪��");
        command("say �ܺ� ! ���˹پ�Ҫ֪����ε��٣����ȿ���(help officer)�ɡ�");
}
int check_class_level()
{
        string *cls = keys(class_level);
        object me = this_player();
        mapping limit;
        int i;
        for( i = 0 ; i < sizeof(cls) ; i ++ )
        {
          limit = class_level[cls[i]];
          if( me->query("title") != cls[i] && me->query("officer_class") == cls[i] ) 
             me->set("title",cls[i]);
          if( me->query("officer_class") == cls[i] ) continue;
          if( me->query("max_officer_power") >= limit["min"] && me->query("max_officer_power") < limit["max"] )
          {
             command("say ��ʥּ!!!!");
             command("say ������Ի:  �� "+me->name(1)+" ���ϱ�������,\n"+
                     "            ������Ϊ "+cls[i]+",�մ�!!!");
             command("say ��ϲ����!!! ��ϲ����!!!");
             me->set("officer_class",cls[i]);
             me->set("title",cls[i]);
             return 1;
           }
        }
        // �Լ���ͽ�ܲ��˳ƺ�����
        command("say �� ! ������� ! �ܺ� !");
        return 1;
}
void init()
{
   add_action("do_return","return");
// if( this_player()->query("family/master_id") == "master chen" )
   if( this_player()->query("class")=="officer" && userp(this_player()) )
     call_out("check_class_level",1);
}
int do_return()
{
        if( this_player()->query("class") != "officer" ) return 0;
//      if( this_player()->query("family/master_id")!="master chen") return 0;
    if( this_player()->query("age") < 18 ) {
                command("say С���� ! �㻹���ᣬ��ô�������ˣ�����ʥ�ϻ᲻��׼Ŷ !");
                return 1;
                }
if( this_player()->query_skill("be-officer",1)< 50 ) {
                command("say С���� ! �ŵ�����ôһ�¹پ������� ? ������û���Ϸ�������� !");
                command("say ���в��� ! �Ϸ�׼ !");
                return 1;
        }
        if( this_player()->query_temp("return") == 0 )
        {
                command("say ����Ĳ��뵱������ ? ");
                tell_object( this_player() , "������һ�� (return) ȷ�ϡ�\n");
                this_player()->set_temp("return",1);
                return 1;
        }
        command("say ��ô .. �ٻ�� !");
        this_player()->delete("class");
        tell_object( this_player() , "�ӽ��������Ѿ����һ������\n");
        this_player()->delete_skill("be-officer");
        this_player()->delete_skill("dragon-dagger");
        this_player()->delete_skill("security");
        this_player()->delete_skill("sha-array");
        this_player()->delete("max_officer_power");
        this_player()->delete("officer_power");
        this_player()->set("return",1);
        this_player()->delete("family");
        this_player()->set("have_officer",1);
        this_player()->delete("relation");
        this_player()->delete_skill("chen-steps");
        this_player()->delete_skill("oneforce");
        this_player()->set("title","��ͨ����");
      this_player()->reset_action();
        return 1;
}

void die()
{    
	object winner = query_temp("last_damage_from");
	int j;
	if(!winner)
	{
	::die();
	return ;
	}

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/hiblue-crystal")->move(environment(winner));
	  message_vision(HIM"\n�ӳ�֪������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/hiblue_crystal",sprintf("%s(%s) �ó�֪������˵�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/hiblue-crystal")->move(environment(winner));
	  message_vision(HIM"\n�ӳ�֪������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/hiblue_crystal",sprintf("%s(%s) �ó�֪������˵�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}