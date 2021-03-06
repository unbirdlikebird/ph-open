/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.LayoutInflater
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_LAYOUTINFLATER_HPP_DECL
#define J2CPP_ANDROID_VIEW_LAYOUTINFLATER_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Factory; } } } }
namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Filter; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace view {

	class LayoutInflater;
	namespace LayoutInflater_ {

		class Factory;
		class Factory
			: public object<Factory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit Factory(jobject jobj)
			: object<Factory>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< android::view::View > onCreateView(local_ref< java::lang::String >  const&, local_ref< android::content::Context >  const&, local_ref< android::util::AttributeSet >  const&);
		}; //class Factory

		class Filter;
		class Filter
			: public object<Filter>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit Filter(jobject jobj)
			: object<Filter>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onLoadClass(local_ref< java::lang::Class >  const&);
		}; //class Filter

	} //namespace LayoutInflater_

	class LayoutInflater
		: public object<LayoutInflater>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)

		typedef LayoutInflater_::Factory Factory;
		typedef LayoutInflater_::Filter Filter;

		explicit LayoutInflater(jobject jobj)
		: object<LayoutInflater>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::view::LayoutInflater > from(local_ref< android::content::Context >  const&);
		local_ref< android::view::LayoutInflater > cloneInContext(local_ref< android::content::Context >  const&);
		local_ref< android::content::Context > getContext();
		local_ref< android::view::LayoutInflater_::Factory > getFactory();
		void setFactory(local_ref< android::view::LayoutInflater_::Factory >  const&);
		local_ref< android::view::LayoutInflater_::Filter > getFilter();
		void setFilter(local_ref< android::view::LayoutInflater_::Filter >  const&);
		local_ref< android::view::View > inflate(jint, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > inflate(local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > inflate(jint, local_ref< android::view::ViewGroup >  const&, jboolean);
		local_ref< android::view::View > inflate(local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::view::ViewGroup >  const&, jboolean);
		local_ref< android::view::View > createView(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::util::AttributeSet >  const&);
	}; //class LayoutInflater

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_LAYOUTINFLATER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_LAYOUTINFLATER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_LAYOUTINFLATER_HPP_IMPL

namespace j2cpp {




android::view::LayoutInflater_::Factory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::view::View > android::view::LayoutInflater_::Factory::onCreateView(local_ref< java::lang::String > const &a0, local_ref< android::content::Context > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::view::LayoutInflater_::Factory::J2CPP_CLASS_NAME,
		android::view::LayoutInflater_::Factory::J2CPP_METHOD_NAME(0),
		android::view::LayoutInflater_::Factory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::view::LayoutInflater_::Factory,"android/view/LayoutInflater$Factory")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater_::Factory,0,"onCreateView","(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;")


android::view::LayoutInflater_::Filter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::LayoutInflater_::Filter::onLoadClass(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		android::view::LayoutInflater_::Filter::J2CPP_CLASS_NAME,
		android::view::LayoutInflater_::Filter::J2CPP_METHOD_NAME(0),
		android::view::LayoutInflater_::Filter::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::LayoutInflater_::Filter,"android/view/LayoutInflater$Filter")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater_::Filter,0,"onLoadClass","(Ljava/lang/Class;)Z")



android::view::LayoutInflater::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



local_ref< android::view::LayoutInflater > android::view::LayoutInflater::from(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(2),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::LayoutInflater >
	>(a0);
}

local_ref< android::view::LayoutInflater > android::view::LayoutInflater::cloneInContext(local_ref< android::content::Context > const &a0)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(3),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::LayoutInflater >
	>(get_jobject(), a0);
}

local_ref< android::content::Context > android::view::LayoutInflater::getContext()
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(4),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::Context >
	>(get_jobject());
}

local_ref< android::view::LayoutInflater_::Factory > android::view::LayoutInflater::getFactory()
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(5),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::view::LayoutInflater_::Factory >
	>(get_jobject());
}

void android::view::LayoutInflater::setFactory(local_ref< android::view::LayoutInflater_::Factory > const &a0)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(6),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< android::view::LayoutInflater_::Filter > android::view::LayoutInflater::getFilter()
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(7),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::view::LayoutInflater_::Filter >
	>(get_jobject());
}

void android::view::LayoutInflater::setFilter(local_ref< android::view::LayoutInflater_::Filter > const &a0)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(8),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< android::view::View > android::view::LayoutInflater::inflate(jint a0, local_ref< android::view::ViewGroup > const &a1)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(9),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1);
}

local_ref< android::view::View > android::view::LayoutInflater::inflate(local_ref< org::xmlpull::v1::XmlPullParser > const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(10),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1);
}

local_ref< android::view::View > android::view::LayoutInflater::inflate(jint a0, local_ref< android::view::ViewGroup > const &a1, jboolean a2)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(11),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::view::LayoutInflater::inflate(local_ref< org::xmlpull::v1::XmlPullParser > const &a0, local_ref< android::view::ViewGroup > const &a1, jboolean a2)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(12),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::view::LayoutInflater::createView(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::view::LayoutInflater::J2CPP_CLASS_NAME,
		android::view::LayoutInflater::J2CPP_METHOD_NAME(13),
		android::view::LayoutInflater::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2);
}



J2CPP_DEFINE_CLASS(android::view::LayoutInflater,"android/view/LayoutInflater")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,1,"<init>","(Landroid/view/LayoutInflater;Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,2,"from","(Landroid/content/Context;)Landroid/view/LayoutInflater;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,3,"cloneInContext","(Landroid/content/Context;)Landroid/view/LayoutInflater;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,4,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,5,"getFactory","()Landroid/view/LayoutInflater$Factory;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,6,"setFactory","(Landroid/view/LayoutInflater$Factory;)V")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,7,"getFilter","()Landroid/view/LayoutInflater$Filter;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,8,"setFilter","(Landroid/view/LayoutInflater$Filter;)V")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,9,"inflate","(ILandroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,10,"inflate","(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,11,"inflate","(ILandroid/view/ViewGroup;Z)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,12,"inflate","(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,13,"createView","(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::LayoutInflater,14,"onCreateView","(Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_LAYOUTINFLATER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
