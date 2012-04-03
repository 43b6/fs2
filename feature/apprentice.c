// apprentice.c

#include <dbase.h>
#include <basic_skill.h>

int is_apprentice_of(object ob)
{
	mapping family;
	
	if( !mapp(family = query("family")) ) return 0;

    if( family["master_id"] == (string)ob->query("id") )
		return 1;

	return 0;	
}

void assign_apprentice(string title, int privs)
{
	mapping family;

	if( !mapp(family = query("family")) ) return;

	family["title"] = title;
	family["privs"] = privs;

	if( userp(this_object()) || !query("title") ) {
		if( family["generation"]==1 )
			set("title", family["family_name"] + "��ɽ��ʦ");
		else
			set("title", sprintf("%s��%s��%s%s",
			  family["family_name"],
			  chinese_number(family["generation"]),
			  query("gender")=="����"?"":"Ů",
			  family["title"]));
	}
}

// This is used for NPC, or start a new family for a player.
void create_family(string family_name, int generation, string title)
{
	mapping family;

	family = allocate_mapping(6);

	family["family_name"] = family_name;
	family["generation"] = generation;

	set("family", family);

	// priv = -1 for ALL privileges.
	assign_apprentice( title, -1 );
}

int recruit_apprentice(object ob)
{
	mapping my_family, family;
	mapping skills;
	string *skname;
	int old_lv, new_lv, i;

	if( ob->is_apprentice_of( this_object() ) )	return 0;
	if( !mapp(my_family = query("family")) ) return 0;

	// �������ʦҪ�����⼼�ܵĴ����������� by Oda 96/6/5
	if( ob->query("family") ) {
		skills = ob->query_skills();
		if( mapp(skills) ) {
			skname = keys( skills );
			for(i=0; i<sizeof(skname); i++)
				if( undefinedp(basic_skill[skname[i]]) ) {
					old_lv = ob->query_skill(skname[i],1);
					new_lv = old_lv * 2/3;
					ob->set_skill(skname[i],new_lv);
				}
		}
		tell_object(ob, "Ϊ�˼��������ɣ�����Ը�����⼼�ܿ۵�����֮һ��\n\n");
	}

	family = allocate_mapping(sizeof(my_family));
	if (undefinedp(my_family["next_title"]))
	  // if (ob->query("gender") == "����")
	    my_family["next_title"] = "����";
	  // else
	  //   my_family["next_title"] = "Ů����";
	else
	  family["next_title"] = my_family["next_title"];
	    

	family["master_id"] = query("id");
	family["master_name"] = query("name");
	family["family_name"] = my_family["family_name"];
	family["generation"] = my_family["generation"] + 1;
	family["enter_time"] = time();
	ob->set("family", family);
	ob->assign_apprentice(my_family["next_title"], 0);

	return 1;
}

