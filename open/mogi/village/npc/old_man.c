
inherit NPC;
string ask_tesin();
void create()
{
        set_name("�ǻ�����", ({ "old man","man" }) );
	set("gender", "����" );
        set("title","ħ��峤��");
        set("age",74);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long","�����ǻ���ߵĳ���, ���������������������µĺۼ�.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("inquiry",([
             "������" : (:ask_tesin:),
             "��Ҷ����" : "��˵����ħ�ű������¥�������д�����ֶ���.",
             "���붴Ѩ" : "��Ҷ�������������Կ���ǧ����Ķ���.",
             "����ħ��" : "��˵���Դ��������,����ǹ����. ����������Ļ�, Ҳ���������.  ����ҪС�����ǻ����Եļ�������.",
             ]));
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        add_money("coin", 25);
         	
}

string ask_tesin()
 {
if (this_player()->query("quests/shasword")==5)
{
 if (!this_player()->query_temp("find_tesin"))
  {
  this_player()->set_temp("find_tesin2",1);
  return ("����������ԭ��һ������ʦ��..����ô���ҵ�����?��");
  }
 if (this_player()->query_temp("find_tesin")==1)
  {
  this_player()->set_temp("find_tesin2",2);
  return ("������֮ǰ����˵��..�������ƺ�����ң�����˼���������ǿ������..�����Ѿ���֪������.");
  }
 if (this_player()->query_temp("find_tesin")==2)
  {
  this_player()->set_temp("find_tesin2",3);
  return ("��Щ��..����˵��..�������ҹ�������..������֪����û�ҵ������ˡ�");
  }
 if (this_player()->query_temp("find_tesin")==3)
  {
  this_player()->set_temp("find_tesin2",4);
  return ("�����İ�..��������˵��.����ħ����...�������������ľ����ˡ�");
  }
 if (this_player()->query_temp("find_tesin")==4)
  {
  this_player()->set_temp("find_tesin2",5);
  return ("��ʮ��ǰ..����������������..����..�Ҳ�֪�����������ġ�");
  }
 if (this_player()->query_temp("find_tesin")==5)
  {
  this_player()->set_temp("find_tesin2",6);
  return ("��������������֮��..����������������ľ���..��������һЩ��������������֮����");
  }
  if (this_player()->query_temp("find_tesin")==6)
  {
  this_player()->set_temp("find_tesin2",7);
  return ("��ʮ��ǰ,��������������..����ߴ���һλС��ʿ..���������⽻��������ũ�ߵļ��ɺ�,�����˾ʹ���ʧ�ˡ�");
  }
}
}






