// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "DataModel/ws-streaming.hxx"

namespace WS
{
  namespace STREAMING
  {
    // TStreamType
    // 

    const TStreamType::ActionURIOptional& TStreamType::
    getActionURI () const
    {
      return this->actionURI_;
    }

    TStreamType::ActionURIOptional& TStreamType::
    getActionURI ()
    {
      return this->actionURI_;
    }

    void TStreamType::
    setActionURI (const ActionURIType& x)
    {
      this->actionURI_.set (x);
    }

    void TStreamType::
    setActionURI (const ActionURIOptional& x)
    {
      this->actionURI_ = x;
    }

    void TStreamType::
    setActionURI (::std::unique_ptr< ActionURIType > x)
    {
      this->actionURI_.set (std::move (x));
    }

    const TStreamType::ElementOptional& TStreamType::
    getElement () const
    {
      return this->element_;
    }

    TStreamType::ElementOptional& TStreamType::
    getElement ()
    {
      return this->element_;
    }

    void TStreamType::
    setElement (const ElementType& x)
    {
      this->element_.set (x);
    }

    void TStreamType::
    setElement (const ElementOptional& x)
    {
      this->element_ = x;
    }

    void TStreamType::
    setElement (::std::unique_ptr< ElementType > x)
    {
      this->element_.set (std::move (x));
    }

    const TStreamType::IdOptional& TStreamType::
    getId () const
    {
      return this->id_;
    }

    TStreamType::IdOptional& TStreamType::
    getId ()
    {
      return this->id_;
    }

    void TStreamType::
    setId (const IdType& x)
    {
      this->id_.set (x);
    }

    void TStreamType::
    setId (const IdOptional& x)
    {
      this->id_ = x;
    }

    void TStreamType::
    setId (::std::unique_ptr< IdType > x)
    {
      this->id_.set (std::move (x));
    }

    const TStreamType::StreamTypeOptional& TStreamType::
    getStreamType () const
    {
      return this->streamType_;
    }

    TStreamType::StreamTypeOptional& TStreamType::
    getStreamType ()
    {
      return this->streamType_;
    }

    void TStreamType::
    setStreamType (const StreamTypeType& x)
    {
      this->streamType_.set (x);
    }

    void TStreamType::
    setStreamType (const StreamTypeOptional& x)
    {
      this->streamType_ = x;
    }

    void TStreamType::
    setStreamType (::std::unique_ptr< StreamTypeType > x)
    {
      this->streamType_.set (std::move (x));
    }


    // TStreamDescriptions
    // 

    const TStreamDescriptions::StreamTypeType& TStreamDescriptions::
    getStreamType () const
    {
      return this->streamType_.get ();
    }

    TStreamDescriptions::StreamTypeType& TStreamDescriptions::
    getStreamType ()
    {
      return this->streamType_.get ();
    }

    void TStreamDescriptions::
    setStreamType (const StreamTypeType& x)
    {
      this->streamType_.set (x);
    }

    void TStreamDescriptions::
    setStreamType (::std::unique_ptr< StreamTypeType > x)
    {
      this->streamType_.set (std::move (x));
    }

    const TStreamDescriptions::TargetNamespaceOptional& TStreamDescriptions::
    getTargetNamespace () const
    {
      return this->targetNamespace_;
    }

    TStreamDescriptions::TargetNamespaceOptional& TStreamDescriptions::
    getTargetNamespace ()
    {
      return this->targetNamespace_;
    }

    void TStreamDescriptions::
    setTargetNamespace (const TargetNamespaceType& x)
    {
      this->targetNamespace_.set (x);
    }

    void TStreamDescriptions::
    setTargetNamespace (const TargetNamespaceOptional& x)
    {
      this->targetNamespace_ = x;
    }

    void TStreamDescriptions::
    setTargetNamespace (::std::unique_ptr< TargetNamespaceType > x)
    {
      this->targetNamespace_.set (std::move (x));
    }


    // StreamSource
    // 

    const StreamSource::StreamDescriptionsType& StreamSource::
    getStreamDescriptions () const
    {
      return this->StreamDescriptions_.get ();
    }

    StreamSource::StreamDescriptionsType& StreamSource::
    getStreamDescriptions ()
    {
      return this->StreamDescriptions_.get ();
    }

    void StreamSource::
    setStreamDescriptions (const StreamDescriptionsType& x)
    {
      this->StreamDescriptions_.set (x);
    }

    void StreamSource::
    setStreamDescriptions (::std::unique_ptr< StreamDescriptionsType > x)
    {
      this->StreamDescriptions_.set (std::move (x));
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace WS
{
  namespace STREAMING
  {
    // TStreamType
    //

    TStreamType::
    TStreamType ()
    : ::xml_schema::Type (),
      actionURI_ (this),
      element_ (this),
      id_ (this),
      streamType_ (this)
    {
    }

    TStreamType::
    TStreamType (const TStreamType& x,
                 ::xml_schema::Flags f,
                 ::xml_schema::Container* c)
    : ::xml_schema::Type (x, f, c),
      actionURI_ (x.actionURI_, f, this),
      element_ (x.element_, f, this),
      id_ (x.id_, f, this),
      streamType_ (x.streamType_, f, this)
    {
    }

    TStreamType::
    TStreamType (const ::xercesc::DOMElement& e,
                 ::xml_schema::Flags f,
                 ::xml_schema::Container* c)
    : ::xml_schema::Type (e, f | ::xml_schema::Flags::base, c),
      actionURI_ (this),
      element_ (this),
      id_ (this),
      streamType_ (this)
    {
      if ((f & ::xml_schema::Flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, false, false, true);
        this->parse (p, f);
      }
    }

    void TStreamType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::Flags f)
    {
      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "actionURI" && n.namespace_ ().empty ())
        {
          this->actionURI_.set (ActionURITraits::create (i, f, this));
          continue;
        }

        if (n.name () == "element" && n.namespace_ ().empty ())
        {
          this->element_.set (ElementTraits::create (i, f, this));
          continue;
        }

        if (n.name () == "id" && n.namespace_ ().empty ())
        {
          this->id_.set (IdTraits::create (i, f, this));
          continue;
        }

        if (n.name () == "streamType" && n.namespace_ ().empty ())
        {
          this->streamType_.set (StreamTypeTraits::create (i, f, this));
          continue;
        }
      }
    }

    TStreamType* TStreamType::
    _clone (::xml_schema::Flags f,
            ::xml_schema::Container* c) const
    {
      return new class TStreamType (*this, f, c);
    }

    TStreamType& TStreamType::
    operator= (const TStreamType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::Type& > (*this) = x;
        this->actionURI_ = x.actionURI_;
        this->element_ = x.element_;
        this->id_ = x.id_;
        this->streamType_ = x.streamType_;
      }

      return *this;
    }

    TStreamType::
    ~TStreamType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, TStreamType >
    _xsd_TStreamType_type_factory_init (
      "tStreamType",
      "http://standardized.namespace.org/ws-streaming");

    // TStreamDescriptions
    //

    TStreamDescriptions::
    TStreamDescriptions (const StreamTypeType& streamType)
    : ::xml_schema::Type (),
      streamType_ (streamType, this),
      targetNamespace_ (this)
    {
    }

    TStreamDescriptions::
    TStreamDescriptions (::std::unique_ptr< StreamTypeType > streamType)
    : ::xml_schema::Type (),
      streamType_ (std::move (streamType), this),
      targetNamespace_ (this)
    {
    }

    TStreamDescriptions::
    TStreamDescriptions (const TStreamDescriptions& x,
                         ::xml_schema::Flags f,
                         ::xml_schema::Container* c)
    : ::xml_schema::Type (x, f, c),
      streamType_ (x.streamType_, f, this),
      targetNamespace_ (x.targetNamespace_, f, this)
    {
    }

    TStreamDescriptions::
    TStreamDescriptions (const ::xercesc::DOMElement& e,
                         ::xml_schema::Flags f,
                         ::xml_schema::Container* c)
    : ::xml_schema::Type (e, f | ::xml_schema::Flags::base, c),
      streamType_ (this),
      targetNamespace_ (this)
    {
      if ((f & ::xml_schema::Flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void TStreamDescriptions::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::Flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // streamType
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "streamType",
              "http://standardized.namespace.org/ws-streaming",
              &::xsd::cxx::tree::factory_impl< StreamTypeType >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!streamType_.present ())
            {
              ::std::unique_ptr< StreamTypeType > r (
                dynamic_cast< StreamTypeType* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->streamType_.set (::std::move (r));
              continue;
            }
          }
        }

        break;
      }

      if (!streamType_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "streamType",
          "http://standardized.namespace.org/ws-streaming");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "targetNamespace" && n.namespace_ ().empty ())
        {
          this->targetNamespace_.set (TargetNamespaceTraits::create (i, f, this));
          continue;
        }
      }
    }

    TStreamDescriptions* TStreamDescriptions::
    _clone (::xml_schema::Flags f,
            ::xml_schema::Container* c) const
    {
      return new class TStreamDescriptions (*this, f, c);
    }

    TStreamDescriptions& TStreamDescriptions::
    operator= (const TStreamDescriptions& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::Type& > (*this) = x;
        this->streamType_ = x.streamType_;
        this->targetNamespace_ = x.targetNamespace_;
      }

      return *this;
    }

    TStreamDescriptions::
    ~TStreamDescriptions ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, TStreamDescriptions >
    _xsd_TStreamDescriptions_type_factory_init (
      "tStreamDescriptions",
      "http://standardized.namespace.org/ws-streaming");

    // StreamSource
    //

    StreamSource::
    StreamSource (const StreamDescriptionsType& StreamDescriptions)
    : ::xml_schema::Type (),
      StreamDescriptions_ (StreamDescriptions, this)
    {
    }

    StreamSource::
    StreamSource (::std::unique_ptr< StreamDescriptionsType > StreamDescriptions)
    : ::xml_schema::Type (),
      StreamDescriptions_ (std::move (StreamDescriptions), this)
    {
    }

    StreamSource::
    StreamSource (const StreamSource& x,
                  ::xml_schema::Flags f,
                  ::xml_schema::Container* c)
    : ::xml_schema::Type (x, f, c),
      StreamDescriptions_ (x.StreamDescriptions_, f, this)
    {
    }

    StreamSource::
    StreamSource (const ::xercesc::DOMElement& e,
                  ::xml_schema::Flags f,
                  ::xml_schema::Container* c)
    : ::xml_schema::Type (e, f | ::xml_schema::Flags::base, c),
      StreamDescriptions_ (this)
    {
      if ((f & ::xml_schema::Flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void StreamSource::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::Flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // StreamDescriptions
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "StreamDescriptions",
              "http://standardized.namespace.org/ws-streaming",
              &::xsd::cxx::tree::factory_impl< StreamDescriptionsType >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!StreamDescriptions_.present ())
            {
              ::std::unique_ptr< StreamDescriptionsType > r (
                dynamic_cast< StreamDescriptionsType* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->StreamDescriptions_.set (::std::move (r));
              continue;
            }
          }
        }

        break;
      }

      if (!StreamDescriptions_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "StreamDescriptions",
          "http://standardized.namespace.org/ws-streaming");
      }
    }

    StreamSource* StreamSource::
    _clone (::xml_schema::Flags f,
            ::xml_schema::Container* c) const
    {
      return new class StreamSource (*this, f, c);
    }

    StreamSource& StreamSource::
    operator= (const StreamSource& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::Type& > (*this) = x;
        this->StreamDescriptions_ = x.StreamDescriptions_;
      }

      return *this;
    }

    StreamSource::
    ~StreamSource ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace WS
{
  namespace STREAMING
  {
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace WS
{
  namespace STREAMING
  {
    void
    operator<< (::xercesc::DOMElement& e, const TStreamType& i)
    {
      e << static_cast< const ::xml_schema::Type& > (i);

      // actionURI
      //
      if (i.getActionURI ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "actionURI",
            e));

        a << *i.getActionURI ();
      }

      // element
      //
      if (i.getElement ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "element",
            e));

        a << *i.getElement ();
      }

      // id
      //
      if (i.getId ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "id",
            e));

        a << *i.getId ();
      }

      // streamType
      //
      if (i.getStreamType ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "streamType",
            e));

        a << *i.getStreamType ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, TStreamType >
    _xsd_TStreamType_type_serializer_init (
      "tStreamType",
      "http://standardized.namespace.org/ws-streaming");


    void
    operator<< (::xercesc::DOMElement& e, const TStreamDescriptions& i)
    {
      e << static_cast< const ::xml_schema::Type& > (i);

      // streamType
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const TStreamDescriptions::StreamTypeType& x (i.getStreamType ());
        if (typeid (TStreamDescriptions::StreamTypeType) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "streamType",
              "http://standardized.namespace.org/ws-streaming",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "streamType",
            "http://standardized.namespace.org/ws-streaming",
            false, true, e, x);
      }

      // targetNamespace
      //
      if (i.getTargetNamespace ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "targetNamespace",
            e));

        a << *i.getTargetNamespace ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, TStreamDescriptions >
    _xsd_TStreamDescriptions_type_serializer_init (
      "tStreamDescriptions",
      "http://standardized.namespace.org/ws-streaming");


    void
    operator<< (::xercesc::DOMElement& e, const StreamSource& i)
    {
      e << static_cast< const ::xml_schema::Type& > (i);

      // StreamDescriptions
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const StreamSource::StreamDescriptionsType& x (i.getStreamDescriptions ());
        if (typeid (StreamSource::StreamDescriptionsType) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "StreamDescriptions",
              "http://standardized.namespace.org/ws-streaming",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "StreamDescriptions",
            "http://standardized.namespace.org/ws-streaming",
            false, true, e, x);
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

