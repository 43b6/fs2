inherit NPC;

string *word = ({
  "���", "�Ÿ�", "��������", "������", "�����", "��ĸ����",
  "������", "������", "С����", "������", "��ү��ү",
});

string hname, wname;
string long();

void create()
{
	set_name("�������",({"people"}));
	set("long", (: long :) );
	set("no_kill",1);
	setup();
}

string long()
{
  object	me=this_player();

  if (random(5))
    return word[random(sizeof(word))]+"\n";
  else
    return "�������--"+me->query("name")+"��\n";
}
