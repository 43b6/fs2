inherit NPC;

string *word1 = ({
  "������", "�����", "������", "������", "����", "����",
  "������", "���฾",
});

string *word2 = ({
  "����ͷ", "�����", "��÷����", "����", "��ҽ�ز�ʿ", "����",
});

string hname, wname;
string long();

void create()
{
	set_name("����",({"relative"}));
	set("long", (: long :) );
	set("no_kill",1);
	setup();
}

string long()
{
  object me=this_player();

  switch (random(3)) {
	case 0:
	  return word1[random(sizeof(word1))]+"\n";
	  break;
	case 1:
	  return word2[random(sizeof(word2))]+"\n";
	  break;
	case 2:
	  if (random(2))
	    return "����"+hname+"������"+me->query("name")+"��\n";
	  else
	    return "����"+wname+"������"+me->query("name")+"��\n";
  }
}

int start_marry(object husband, object wife)
{
  hname = husband->query("name");
  wname = wife->query("name");
} 
