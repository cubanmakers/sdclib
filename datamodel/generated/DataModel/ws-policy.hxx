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

/**
 * @file
 * @brief Generated from ws-policy.xsd.
 */

#ifndef WS_POLICY_HXX
#define WS_POLICY_HXX

#include "DataModel/ws-policy-fwd.hxx"

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <memory>    // ::std::unique_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search
#include <utility>   // std::move

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "DataModel/ws-streaming.hxx"

namespace WS
{
  /**
   * @brief C++ namespace for the %http://www.w3.org/ns/ws-policy
   * schema namespace.
   */
  namespace POLICY
  {
    /**
     * @brief Class corresponding to the %Policy schema type.
     *
     * @nosubgrouping
     */
    class Policy: public ::xml_schema::Type
    {
      public:
      /**
       * @name StreamSource
       *
       * @brief Accessor and modifier functions for the %StreamSource
       * required element.
       */
      //@{

      /**
       * @brief Element type.
       */
      typedef ::WS::STREAMING::StreamSource StreamSourceType;

      /**
       * @brief Element traits type.
       */
      typedef ::xsd::cxx::tree::traits< StreamSourceType, char > StreamSourceTraits;

      /**
       * @brief Return a read-only (constant) reference to the element.
       *
       * @return A constant reference to the element.
       */
      const StreamSourceType&
      getStreamSource () const;

      /**
       * @brief Return a read-write reference to the element.
       *
       * @return A reference to the element.
       */
      StreamSourceType&
      getStreamSource ();

      /**
       * @brief Set the element value.
       *
       * @param x A new value to set.
       *
       * This function makes a copy of its argument and sets it as
       * the new value of the element.
       */
      void
      setStreamSource (const StreamSourceType& x);

      /**
       * @brief Set the element value without copying.
       *
       * @param p A new value to use.
       *
       * This function will try to use the passed value directly
       * instead of making a copy.
       */
      void
      setStreamSource (::std::unique_ptr< StreamSourceType > p);

      //@}

      /**
       * @name Constructors
       */
      //@{

      /**
       * @brief Create an instance from the ultimate base and
       * initializers for required elements and attributes.
       */
      Policy (const StreamSourceType&);

      /**
       * @brief Create an instance from the ultimate base and
       * initializers for required elements and attributes
       * (::std::unique_ptr version).
       *
       * This constructor will try to use the passed values directly
       * instead of making copies.
       */
      Policy (::std::unique_ptr< StreamSourceType >);

      /**
       * @brief Create an instance from a DOM element.
       *
       * @param e A DOM element to extract the data from.
       * @param f Flags to create the new instance with.
       * @param c A pointer to the object that will contain the new
       * instance.
       */
      Policy (const ::xercesc::DOMElement& e,
              ::xml_schema::Flags f = 0,
              ::xml_schema::Container* c = 0);

      /**
       * @brief Copy constructor.
       *
       * @param x An instance to make a copy of.
       * @param f Flags to create the copy with.
       * @param c A pointer to the object that will contain the copy.
       *
       * For polymorphic object models use the @c _clone function instead.
       */
      Policy (const Policy& x,
              ::xml_schema::Flags f = 0,
              ::xml_schema::Container* c = 0);

      /**
       * @brief Copy the instance polymorphically.
       *
       * @param f Flags to create the copy with.
       * @param c A pointer to the object that will contain the copy.
       * @return A pointer to the dynamically allocated copy.
       *
       * This function ensures that the dynamic type of the instance is
       * used for copying and should be used for polymorphic object
       * models instead of the copy constructor.
       */
      virtual Policy*
      _clone (::xml_schema::Flags f = 0,
              ::xml_schema::Container* c = 0) const;

      /**
       * @brief Copy assignment operator.
       *
       * @param x An instance to make a copy of.
       * @return A reference to itself.
       *
       * For polymorphic object models use the @c _clone function instead.
       */
      Policy&
      operator= (const Policy& x);

      //@}

      /**
       * @brief Destructor.
       */
      virtual 
      ~Policy ();

      // Implementation.
      //

      //@cond

      protected:
      void
      parse (::xsd::cxx::xml::dom::parser< char >&,
             ::xml_schema::Flags);

      protected:
      ::xsd::cxx::tree::one< StreamSourceType > StreamSource_;

      //@endcond
    };
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace WS
{
  namespace POLICY
  {
  }
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace WS
{
  namespace POLICY
  {
    void
    operator<< (::xercesc::DOMElement&, const Policy&);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // WS_POLICY_HXX
